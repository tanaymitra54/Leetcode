class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        
        vector<string> result;
        for(int i =0 ; i<words.size(); i++){
            string rev = words[i];
            reverse(rev.begin(), rev.end());
            result.push_back(rev);
        }

        int count = 0;
        for(int i =0 ; i<words.size(); i++){
            for(int j =0 ; j<result.size(); j++){
                if( i != j && words[i] == result[j]){
                    count++;
                }
            }
        }
        return count/2;

    }
};