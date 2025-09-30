class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        int maxx = *max_element(nums.begin(),nums.end());

        int sum = maxx;
        int new_num = maxx + 1;
        for(int i =0 ; i<k-1; i++){
            sum += new_num;
            new_num = new_num+1;
        }
        return sum;
        
       

        

    }
};