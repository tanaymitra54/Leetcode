class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int  n = nums.size();
        int m = queries.size();
        sort(nums.begin(),nums.end());
        int temp = 0;

        vector<int> prefix_sum(n);

        for(int i = 0; i<n; i++){
            temp+= nums[i];
            prefix_sum[i] = temp;
        }

        vector<int> ans;
        for(int j = 0 ; j<m; j++){
            int query = queries[j];

            int l =0;
            int r = n-1;
            int  count =0;
            while (l<=r) {
                int mid = l +(r-l)/2;
                if(prefix_sum[mid] <= query){
                    count = mid +1;
                    l = mid +1;

                }
                else{
                    r = mid - 1;
                }
            }

            ans.push_back(count);
        }
        return ans;
    }
};