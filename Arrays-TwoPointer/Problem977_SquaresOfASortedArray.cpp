class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // // The obvious solution
        // for (int i = 0; i < nums.size(); i++){
        //     nums[i] = nums[i] * nums[i];
        // }
        // sort(nums.begin(), nums.end());

        // return nums;

        // O(n)
        vector<int> solution = nums;
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right){
            if (abs(nums[left]) > abs(nums[right])){
                solution[right - left] = nums[left] * nums[left];
                left++;
            }
            else{
                solution[right - left] = nums[right] * nums[right];
                right--;
            }
        }

        return solution;
        
    }
};