class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int sum = accumulate(nums.begin(), nums.end(), 0);

        if (sum < target){
            return 0;
        }

        int left = 0;
        int right = 0;
        int smallestWindow = 2000000;

        sum = nums[left];

        while (left != nums.size()){
            if (sum < target && (right < nums.size()-1)){
                right++;
                sum+=nums[right];
            }
            else if (sum >= target){
                if (right - left + 1 < smallestWindow){
                    smallestWindow = right - left + 1;
                }
                if (smallestWindow == 1){
                    return smallestWindow;
                }
                left++;
                sum-=nums[left-1];
            }
            else {
                return smallestWindow;
            }

        }

        return smallestWindow;
    }
};