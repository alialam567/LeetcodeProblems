class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // Solution 1 that first comes to mind O(nlogn)
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < nums.size(); i++){
        //     if (i != nums[i]){
        //         return i;
        //     }
        // }
        // return nums.size();

        // Solution 2 that is betterrrr O(n) cause of reduce
        return (nums.size() * (nums.size() + 1) / 2) - reduce(nums.begin(),nums.end());
    }
};