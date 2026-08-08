class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        //Took me a while to think up this solution :( and needed help from gpt to figure out the last bug with duplications :(

        // vector<int> solution;
        // int loop = 0;
        // int rows = matrix.size();
        // int columns = matrix[0].size();
        // int dir = 0;
        // int i = 0;
        // int j = 0;

        // while (true){

        //     solution.push_back(matrix[i][j]);
        //     if (solution.size() == (rows*columns)){
        //         break;
        //     }
        //     if (dir == 0){
        //         if (j < (columns - loop - 1)){
        //             j++;
        //             continue;
        //         }
        //         else{
        //             i++;
        //             dir++;
        //             continue;
        //         }
        //     }
        //     else if (dir == 1){
        //         if (i < (rows - loop - 1)){
        //             i++;
        //             continue;
        //         }
        //         else{
        //             j--;
        //             dir++;
        //             continue;
        //         }

        //     }
        //     else if (dir == 2){
        //         if (j > (loop)){
        //             j--;
        //             continue;
        //         }
        //         else{
        //             i--;
        //             dir++;
        //             continue;
        //         }

        //     }
        //     else if (dir == 3){
        //         if (i > (loop + 1)){
        //             i--;
        //             continue;
        //         }
        //         else{
        //             j++;
        //             dir = 0;
        //             loop++;
        //             continue;
        //         }

        //     }
        // }

        // return solution;

        //AHHHHHH this is junk the better solution is a pattern revealed via going through examples. Study this one more before moving on.

        // int right = matrix[0].size() - 1;
        // int down = matrix.size() - 1;
        // int left = 0;
        // int up = 0;

        // int i = 0;
        // int j = 0;

        // solution.push_back(matrix[i][j]);

        // while (solution.size() != (matrix.size() * matrix[0].size())){
        //     if (j < right){
        //         j++;
        //         continue;
        //     }

        // }
        
        // return solution;

        //BETTER SOLUTION??
        // vector<int> solution;

        // int top = 0;
        // int bottom = matrix.size() - 1;
        // int left = 0;
        // int right = matrix[0].size() - 1;

        // while (top <= bottom && left <= right) {

        //     // Left -> Right
        //     for (int j = left; j <= right; j++)
        //         solution.push_back(matrix[top][j]);
        //     top++;

        //     // Top -> Bottom
        //     for (int i = top; i <= bottom; i++)
        //         solution.push_back(matrix[i][right]);
        //     right--;

        //     // Right -> Left
        //     if (top <= bottom) {
        //         for (int j = right; j >= left; j--)
        //             solution.push_back(matrix[bottom][j]);
        //         bottom--;
        //     }

        //     // Bottom -> Top
        //     if (left <= right) {
        //         for (int i = bottom; i >= top; i--)
        //             solution.push_back(matrix[i][left]);
        //         left++;
        //     }
        // }

        // return solution;

        // This solution doesnt work very well in C++ much better in python :(( not the idiomatic c++ solution

        vector<int> solution;

        while (!matrix.empty()) {

            // Step 1: Remove first row
            for (int x : matrix.front())
                solution.push_back(x);

            matrix.erase(matrix.begin());

            // Step 2: Remove last element of each remaining row
            for (int i = 0; i < matrix.size(); i++) {
                if (!matrix[i].empty()) {
                    solution.push_back(matrix[i].back());
                    matrix[i].pop_back();
                }
            }

            // Step 3: Remove last row in reverse
            if (!matrix.empty()) {
                for (int i = matrix.back().size() - 1; i >= 0; i--)
                    solution.push_back(matrix.back()[i]);

                matrix.pop_back();
            }

            // Step 4: Remove first element of remaining rows (bottom -> top)
            for (int i = matrix.size() - 1; i >= 0; i--) {
                if (!matrix[i].empty()) {
                    solution.push_back(matrix[i].front());
                    matrix[i].erase(matrix[i].begin());
                }
            }

            // Remove any rows that became empty
            for (int i = matrix.size() - 1; i >= 0; i--) {
                if (matrix[i].empty())
                    matrix.erase(matrix.begin() + i);
            }
        }

        return solution;
    }
};