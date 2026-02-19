class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 1;
        int prev = 0;
        int sum =0;
        for(int i = 1 ; i<s.length() ; i++){
            if(s[i] == s[i - 1]){
                count++;
            }
            else{
                sum+= min(prev,count);
                prev = count;
                count = 1;
            }
        }
        sum+= min(prev,count);
        return sum;
    }
};