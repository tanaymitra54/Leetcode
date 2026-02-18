class Solution {
public:
    string toBinary(int n){
        string binary = "";
        while(n>0){
            binary = to_string(n%2) +  binary;
            n = n/2;
        }
        return binary;
    }
    bool hasAlternatingBits(int n) {
        string s = toBinary(n);
        for(int i =0 ; i<s.length(); i++){
            if(s[i] == s[i+1]){
                return false;
            }
        }
        return true;

    }
};