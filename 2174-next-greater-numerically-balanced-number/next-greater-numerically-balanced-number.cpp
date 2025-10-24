class Solution {
public:
    bool isBeautiful(int num) {
        unordered_map<int,int> freq;
        int temp = num;

        while(temp > 0) {
            int digit = temp % 10;
            if(digit > 7) return false; // digits > 7 cannot form beautiful numbers
            freq[digit]++;
            temp /= 10;
        }

        for(auto& p : freq){
            int digit = p.first;
            int count = p.second;
            if(count != digit) return false;
        }
        return true;
    }

    int nextBeautifulNumber(int n) {
        int num = n + 1;
        while(true){
            if(isBeautiful(num)) return num;
            num++;
        }
        return -1; // will never reach here
    }
};