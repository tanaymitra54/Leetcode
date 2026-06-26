class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>prefix (n+1,0);
        int count =0;

        for(int i =0 ; i<n ; i++){
            prefix[i+1] = prefix[i] + (nums[i] == target ? 1 : -1);
        }

        for(int i =1 ; i<=n ; i++){
            for(int j=0 ; j<i ; j++){
                if(prefix[i] > prefix[j]){
                    count++;
                }
            }
        }
        return count;
    }
};