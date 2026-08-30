class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // vector<vector<int>> solution;
        // int j = 0;
        // int k = nums.size()-1;

        // sort(nums.begin(), nums.end());

        // // for (int i = 1; i < nums.size() - 2; i++){
        // //     j = 0;
        // //     k = nums.size()-1;
        // //     while (k-j > 2){
        // //         if ((nums[i] + nums[j] + nums[k] > 0) && (k > i)){
        // //             k--;
        // //         }
        // //         else if ((nums[i] + nums[j] + nums[k] < 0) && (j < i)){
        // //             j++;
        // //         }
        // //         else if ((nums[i] + nums[j] + nums[k] == 0)){
        // //             solution.push_back({nums[i], nums[j], nums[k]});
        // //             break;
        // //         }
        // //         else{
        // //             break;
        // //         }
        // //     }
        // // }


        // //iterate through i and then 2 pointer method the remaining array for solutions
        // //ensure we skip over duplicate solutions 
        // //1. when we iterate i duplicate solutions if i = i+1
        // //2. when we two pointer duplicate solutions if j = j+1 or k = k+1
        // for (int i = 0; i < nums.size() - 2; i++){
        //     // skip duplicate i's
        //     if (i > 0 && nums[i] == nums[i - 1])
        //         continue;

        //     int j = i + 1;
        //     int k = nums.size() - 1;

        //     while (j < k){

        //         int sum = nums[i] + nums[j] + nums[k];

        //         if (sum < 0){
        //             j++;
        //         }
        //         else if (sum > 0){
        //             k--;
        //         }
        //         else{
        //             solution.push_back({nums[i], nums[j], nums[k]});
                    
        //             //skip duplicate j's
        //             while ((j < k) && nums[j] == nums[j+1]){
        //                 j++;
        //             }

        //             //skip duplicate k's
        //             while ((j < k) && nums[k] == nums[k-1]){
        //                 k--;
        //             }

        //             j++;
        //             k--;
        //         }

        //     }
        // }

        // return solution;


        // REDID THE QUESTION A FEW DAYS LATTER AND ACTUALLY IMPROVED THE SOLUTION NICEEEE

        vector<vector<int>> solution;
        sort(nums.begin(), nums.end());
        
        int left = 1;
        int right = nums.size() - 1;

        for (int i = 0; i < nums.size() - 2; i++){

            if (i != 0 && nums[i] == nums[i-1]){
                continue;
            }

            left = i + 1;
            right = nums.size() - 1;

            while (left < right){

                if ((nums[i] + nums[left] + nums[right]) < 0){
                    left++;
                    continue;
                }
                else if((nums[i] + nums[left] + nums[right]) > 0){
                    right--;
                    continue;
                }
                else{
                    solution.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }

                while(left < right && nums[left] == nums[left - 1]){
                    left++;
                }

                while(left < right && nums[right] == nums[right + 1]){
                    right--;
                }

            }
        }

        return solution;
        
    }
};