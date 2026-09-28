class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int MAD = 10000000;
        vector<vector<int>> solution;

        //find MAD
        for (int i = 0; i < arr.size() - 1; i++){
            if (abs(arr[i+1]-arr[i]) < MAD) {
                MAD = abs(arr[i+1]-arr[i]);
            }
        }

        for (int i = 0; i < arr.size() - 1; i++){
            if (abs(arr[i+1]-arr[i]) == MAD) {
                solution.push_back({arr[i],arr[i+1]});
            }
        }

        return solution;

    }
};