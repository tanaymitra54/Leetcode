class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        int maxSum = nums[0], minSum = nums[0];
        int currMax = 0, currMin = 0;
        
        for(int num : nums) {
            // Maximum subarray sum (Kadane's)
            currMax = max(num, currMax + num);
            maxSum = max(maxSum, currMax);
            
            // Minimum subarray sum (Kadane's for min)
            currMin = min(num, currMin + num);
            minSum = min(minSum, currMin);
            
            total += num;
        }
        
        // If all numbers are negative, return maxSum
        if(maxSum < 0) return maxSum;
        
        // Answer is max of:
        // 1. Normal max subarray (non-circular)
        // 2. Total sum - minimum subarray (circular case)
        return max(maxSum, total - minSum);
    }
};