class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;//count the frequency of the character
        for(char ch : word){
            mp[ch]++;
        }
        vector<int> freqq;
        for(auto& [ch,freq] : mp){
            freqq.push_back(freq);
        }
        sort(freqq.rbegin(),freqq.rend());
        
        int count =0;
        for(int j=0;j<freqq.size(); j++){
            count += freqq[j] * (j/8 + 1);
        }
        return count;
    }
};