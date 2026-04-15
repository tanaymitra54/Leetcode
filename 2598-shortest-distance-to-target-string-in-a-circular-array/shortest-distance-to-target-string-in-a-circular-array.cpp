class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int mini = INT_MAX;
        int n = words.size();
        for(int i =0 ; i<n ;i++){
            if(words[i] == target){
               int diff = abs(i - startIndex);                 // correct distance
                int circular = min(diff, n - diff);             // circular distance
                mini = min(mini, circular);
            }
        }
       return (mini == INT_MAX) ? -1 : mini;
    }
};