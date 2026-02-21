class Solution {
public:
    string toBinary(int n){
        string binary = "";
        while(n>0){
            binary =to_string(n%2) + binary;
            n = n/2;
        }
        return binary;
    }
    bool calculatePrimeBits(string bin){
        int count = 0;
        for(int i = 0; i<bin.length() ; i++){
            if(bin[i] == '1'){
                count++;
            }
        }
        if(count < 2) return false;
        for(int i = 2 ; i*i <= count; i++){//start from i  = 2
            if(count % i == 0){ //the oreder should be well maintained 
                return false;
            }
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i = left; i<= right; i++){
            string binary = toBinary(i);
            bool isPrime = calculatePrimeBits(binary);
            if(isPrime){
                count++;
            }
        }
        return count;
    }
};