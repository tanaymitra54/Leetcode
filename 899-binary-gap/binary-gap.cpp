class Solution {
public:
    string toBinary(int n){
        string binary = "";
        while(n>0){
            binary =to_string(n%2) + binary ;
            n = n/2;
        }
        return binary;
    }
    int binaryGap(int n) {
        string binary = toBinary(n);
        int prev = -1;
        int max_distance = 0;
        for(int i =0 ; i<binary.length(); i++){
            if(binary[i] == '1'){
                if(prev != -1){
                    max_distance = max(max_distance,i - prev);
                }
                prev = i;
            }
        }
        return max_distance;
    }
};