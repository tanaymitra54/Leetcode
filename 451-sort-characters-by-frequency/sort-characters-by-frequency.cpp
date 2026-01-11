class Solution {
public:
    string frequencySort(string s) {
        //store the freq of all characters i a hashmap 
        //prepare a priority queeue and pop pq.
        //pop into ans until pq is not empty
        unordered_map<char,int>freq;
        for(char ch : s){
            freq[ch]++;
        }

        priority_queue<pair<int,char>>pq;
        for(auto current : freq){
            pq.push({current.second, current.first});
        }
        string ans = "";

        while(!pq.empty()){
            int count = pq.top().first;
            int currentchar = pq.top().second;
            pq.pop();

            while(count--){
                ans += string(1,currentchar);
            }
        }
        return ans;
        



    }
};