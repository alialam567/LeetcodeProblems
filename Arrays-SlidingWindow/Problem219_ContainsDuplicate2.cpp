class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_set<int> mySet;
        
        for (int i = 0; i < nums.size(); i++){

            if (i > k){
                mySet.erase(nums[i-k-1]);
            }
            if (mySet.count(nums[i])){
                return true;
            }
            mySet.insert(nums[i]);
        }

        return false;
    }
};