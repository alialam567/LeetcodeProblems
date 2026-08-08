class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        // Uses a lot of extra space but space is cheap, time complexity > space

        unordered_map<int, int> smallerCount;
        vector<int> temp = nums;
        vector<int> solution;
        sort(temp.begin(), temp.end());

        for (int i = 0; i < temp.size(); i++){
            if (!smallerCount.contains(temp[i])){
                smallerCount[temp[i]] = i;
            } 
        }

        for (int i = 0; i < nums.size(); i++){
            solution.push_back(smallerCount[nums[i]]);
        }

        return solution;

        
    }
};