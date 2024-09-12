class Solution {
public:
        bool is_consistant(string word, map<char,int> list) {
                    for(char c: word) {
                                if(list[c] == 0) return false;
                                        }
                                                return true;
        }
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> list;
                int res = 0;
                        for(char c: allowed) list[c]++;

                                for(auto word: words) {
                                            res += is_consistant(word, list) ? 1 : 0;
                                                    }
                                                            return res;
                                                            
    }
};