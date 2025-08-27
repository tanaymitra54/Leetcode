class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        vector<char> characters;
        vector<char> character;
        for(int i =0; i<words.size(); i++){
            characters.push_back(words[i][0]);
        }

        for(int i =0 ; i<s.size(); i++){
            character.push_back(s[i]);
        }

        for(int i =0 ; i< character.size();i++){
            if(character == characters){
                return true;
            }
        }
        return false;
    }
};