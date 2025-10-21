class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int l =0; 
        int count =0;
        int result  =0;

        for(int r =0; r<n; r++){
            //cont the number of odd numbers 
            if(nums[r]%2 != 0){
                count++;
            }

            //invalid case when count of the odd numbers exceeds k
            while(count>k){
                if(nums[l]%2 != 0) count--;//reduce the count valeu and then increment the left pointer 
                l++;
            }
            //DANGER AREA
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