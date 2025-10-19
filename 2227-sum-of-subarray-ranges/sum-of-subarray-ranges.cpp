class Solution {
public:
    int 
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long total = 0;
        for(int i =0 ; i<nums.size(); i++){
            int smallest = nums[i];
            int largest  = nums[i];
            for(int j = i+1; j<nums.size(); j++){
                smallest = min(nums[j], smallest);
                largest = max(nums[j], largest);

                total += largest - smallest;
            }
        }
        return total;
    }
};