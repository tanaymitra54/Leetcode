class Solution {
public:
int digitSum(int n){
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum += digit;
        n = n/10;
    }
    return sum;
}
    int addDigits(int num) {
        int sum = num;
        string word = to_string(sum);
        while(word.length() > 1){
            sum = digitSum(sum);
            word = to_string(sum);
        }
        return sum;
    }
};