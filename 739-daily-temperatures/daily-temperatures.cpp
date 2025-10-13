class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<pair<int,int>> st;//stack to store the temperature and their index
        vector<int> result(n,0);

        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && temperatures[i] > st.top().first){
                int index = st.top().second;
                st.pop();
                result[index] = i - index;
            }
            st.push({temperatures[i],i});
        }
        return result;
    }
};