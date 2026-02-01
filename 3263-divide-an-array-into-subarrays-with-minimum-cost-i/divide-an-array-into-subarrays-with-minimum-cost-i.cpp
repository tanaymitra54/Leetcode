class Solution {
public:
    int minimumCost(vector<int>& nums) {
        // Initialize two minimums to a very large value
        int min1 = 100, min2 = 100; 
        
        // Loop through the rest of the array to find the two smallest numbers
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < min1) {
                min2 = min1;    // The old smallest becomes second smallest
                min1 = nums[i]; // Update the new smallest
            } else if (nums[i] < min2) {
                min2 = nums[i]; // Update second smallest
            }
        }
        
        return nums[0] + min1 + min2;
    }
};