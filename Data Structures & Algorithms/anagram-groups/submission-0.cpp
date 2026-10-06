class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> map;
        for(int i=0; i<strs.size(); i++){
            string original_word=strs[i];
            string sorted_key=original_word;
            sort(sorted_key.begin(), sorted_key.end());
            map[sorted_key].push_back(original_word);
        }
        vector<vector<string>> result;
        for(auto pair:map){
            result.push_back(pair.second);
        }
        return result;
    }
};
