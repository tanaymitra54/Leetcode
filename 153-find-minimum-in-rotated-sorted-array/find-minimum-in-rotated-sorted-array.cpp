class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i = 0; i<nums.size(); i++){
            int minimum = nums[i];
            mini = min(mini,minimum);
        }
        return mini;
    }
};