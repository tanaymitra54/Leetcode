class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;
        alt.push_back(0);
        for(int i =0 ; i<gain.size(); i++){
            alt.push_back(alt.back() + gain[i]);
        }

        int max_element = INT_MIN;
        for(int num : alt){
             max_element = max(max_element,num);
        }
        return max_element;
    }
};