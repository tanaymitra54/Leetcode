class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int l =0; 
        int count =0;
        int result  =0;

        for(int r =0; r<n; r++){
            if(nums[r]%2 != 0){
                count++;
            }
            //invalid case
            while(count>k){
                if(nums[l]%2 != 0) count--;
                l++;
            }
            //count gets equal to k
            if(count == k){
                int temp =l;
                while(temp <r && nums[temp]%2 == 0){
                   temp++;
                }
                result += (temp - l + 1);
            }

        }
        return result;
    }
};