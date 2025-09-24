class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int sum =0;
        int n = nums.size();

        for(int i =0 ; i<n; i++){
            for(int j =0 ; j<n; j++){
                if(abs(nums[i] - nums[j]) == k){
                    sum++;
                }
            }
        }
        return sum/2;
    }
};