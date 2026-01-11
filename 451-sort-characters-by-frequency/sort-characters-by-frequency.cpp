class Solution {
public:
    string frequencySort(string s) {
        //store the characters and the frequency in a hashmap
        //use a priority queue to sort according to the frequency 
        //pop and strore it in the answer 
        unordered_map<char,int> freq;
        for(char ch : s){
            freq[ch]++;
        }

        priority_queue<pair<int,char>> pq;
        for(auto current : freq){
            pq.push({current.second, current.first});
        }
        string ans = "";
        while(!pq.empty()){
            int count  = pq.top().first;
            char currentchar = pq.top().second;
            pq.pop();
            while(count--){
                ans += string(1,currentchar);
            }
        }
        return ans;
    }
};