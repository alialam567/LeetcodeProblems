class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // vector<int> solution;
        // int j = numbers.size() - 2;
        // int i = numbers.size() - 1;
        // while (i > 0){
        //     if ((numbers[i] + numbers[j]) > target){
        //         if (j > 0){
        //             j--;
        //         }
        //         else{
        //             i--;
        //         }
        //     }
        //     else if ((numbers[i] + numbers[j]) < target){
        //         i--;
        //     }
        //     else{
        //         break;
        //     }
        // }

        // solution.push_back(j+1);
        // solution.push_back(i+1);
        // return solution;

        //Need to start from opposited ends since otherwise valid possible solutions can be skipped. When you
        //start from opposite end since it is sorted when you increase the left pointer anything further left of it
        //would have been even smaller and thus not a valid solution. 
        // Same logic applies to the right pointer except even bigger. This is why we start from opposite ends.

        vector<int> solution;
        int j = 0;
        int i = numbers.size() - 1;
        while (i > j){
            if ((numbers[i] + numbers[j]) > target){
                i--;
            }
            else if ((numbers[i] + numbers[j]) < target){
                j++;
            }
            else{
                break;
            }
        }

        solution.push_back(j+1);
        solution.push_back(i+1);
        return solution;


    }
};