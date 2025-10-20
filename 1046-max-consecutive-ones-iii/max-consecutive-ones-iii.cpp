class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int num_zeroes = 0;
        int max_w = 0;
        int l = 0;
        


        for(int i = 0 ; i<n ; i++){
            if(nums[i] == 0){//if zero encountered then increment the num of zeroe
                num_zeroes++;
            } 
            while(num_zeroes > k){//run  till its invalid  come out of it once it gets valid
                if(nums[l] == 0){//if the start of the window is 0 then push the left pointer forward and decrement  the number of zeroes 
                    num_zeroes -=1;
                }
                l++;
            }
            int w = i-l+1;
            max_w = max(max_w,w);
        }
        return max_w;
    }
};