class Solution {
public:
    char nextChar(char c) {
        return (c == 'z') ? 'a' : c + 1;
    }

    char kthCharacter(int k) {
        std::string word = "a";

        while (word.size() < k) {
            std::string nextPart;
            for (char c : word) {
                nextPart += nextChar(c);
            }
            word += nextPart;
        }

        return word[k - 1]; 
    }
};
