class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // First intuition or do nested loop O(N^2) solution
        // int i = 0;
        // int k = 1;

        // while (i < nums.size()){
        //     if ((nums[i] + nums[k]) == target){
        //         return {i, k};
        //     }
        //     else if (k < nums.size()-1){
        //         k++;
        //     }
        //     else{
        //         i++;
        //         k=i+1;
        //     }

        // }
        // return {i, k};

        //Most optimal solution O(N) use hash_map = unordered_map
        //Clean up repeated logic by making variabl diff = target - nums[i]
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); i++){
            if (hashmap.contains(target - nums[i])){
                return {i, hashmap[target - nums[i]]};
            }
            else {
                hashmap[nums[i]] = i;
            }
        }
        return {0};
    }
};