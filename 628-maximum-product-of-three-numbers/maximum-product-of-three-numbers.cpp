class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n = nums.size();
       
        int threeproduct = nums[n-1] * nums[n-2] * nums[n-3];//multiply 3 largest number
        int twoSmallest = nums[0] * nums[1] * nums[n-1];//two smallest numbers could be negative which on multiplication would give us a positive number
        
        return max(threeproduct,twoSmallest);
    }
};