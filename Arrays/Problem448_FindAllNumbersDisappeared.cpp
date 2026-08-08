class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {


        // Solution number 1: 3n = O(n) but also not O(1) space since missedNums is copying all of n and being manipulated (not just for building the output array)

        // vector<int> missedNums;

        // for (int i = 0; i < nums.size(); i++){
        //     missedNums.push_back(i+1);
        // }
        
        // for (int i = 0; i < nums.size(); i++){
        //     missedNums[(nums[i] - 1)] = 0;
        // }

        // for (int i = 0; i < missedNums.size(); i++){
        //     if (missedNums[i] == 0){
        //         missedNums.erase(missedNums.begin() + i);
        //         i--;
        //     }
        // }
        // return missedNums;

        // Solution 2 (The best): 2n = O(n), this is considered O(1) space since missedNums is only used for building the output array!

        // vector<int> missedNums;

        // for (int i = 0; i < nums.size(); i++){
        //     nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1]);
        // }

        // for (int i = 0; i < nums.size(); i++){
        //     if (nums[i] > 0){
        //         missedNums.push_back(i+1);
        //     }
        // }

        // return missedNums;

        // Solution 3:
        
        // vector<int> missedNums;
        // unordered_set<int> setNums;

        // for (int i = 0; i < nums.size(); i++){
        //     setNums.insert(nums[i]);
        // }

        // for (int i = 1; i <= nums.size(); i++){
        //     if (!setNums.contains(i)){
        //         missedNums.push_back(i);
        //     }
        // }

        // return missedNums;

    }
};