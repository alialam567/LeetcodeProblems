class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Solution 1: Way too slow

        // for (int i = 0; i < nums.size() - 1; i++){
        //     for (int j = i + 1; j < nums.size(); j++){
        //         if (nums[i] == nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        // // Solution 2: It works but is nlogn time complexity
        // sort(nums.begin(),nums.end());
        // for (int i = 0; i < nums.size() - 1; i++){
        //     if (nums[i] == nums[i + 1]){
        //         return true;
        //     }
        // }
        // return false;

        // Solution 3: This ended up being slower need to understand why.. definitely more elegant though
        unordered_set<int> noDuplicates(nums.begin(), nums.end());
        if (nums.size() != noDuplicates.size()){
            return true;
        }
        else{
            return false;
        }


    }
};