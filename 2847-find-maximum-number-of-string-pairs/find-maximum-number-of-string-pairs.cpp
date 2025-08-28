class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        
        vector<string> result;
        for(int i =0 ; i<words.size(); i++){
            string temp = words[i]; 
            reverse(temp.begin(), temp.end());
            result.push_back(temp);
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