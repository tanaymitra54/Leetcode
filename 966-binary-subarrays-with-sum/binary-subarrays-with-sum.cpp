class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //approach sliding window
        int l =0;
        int r =0;
        int count_zeroes = 0;
        int sum = 0;
        int n = nums.size();
        int result = 0;

        while(r<n){
            sum+= nums[r];
            //invalid case
            while(l<r && (nums[l]== 0 || sum>goal)){
                if(nums[l] == 0){
                    count_zeroes++;
                }
                else{
                    count_zeroes = 0;
                }
                sum -= nums[l];
                l++;
            }

            if(sum == goal){
                result += 1 + count_zeroes;
            }
            r++;
        }

        return result;
    }
};