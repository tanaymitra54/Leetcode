class Solution {
public:
    string toBinary(uint32_t n){

    string binary = "";
    for(int i = 0; i<32; i++){
        binary = to_string(n%2) + binary;
        n = n/2;
    }
    return binary;
}

uint32_t toDecimal(string binary){
    uint32_t decimal =0;
    for(int i = 0 ; i < binary.length(); i++){
        decimal = decimal * 2 + (binary[i] - '0');
    }
    return decimal;
}
    int reverseBits(int n) {
        string binary = toBinary(n);
    reverse(binary.begin(),binary.end());

    int decimal = toDecimal(binary);
    return decimal;
    }
};