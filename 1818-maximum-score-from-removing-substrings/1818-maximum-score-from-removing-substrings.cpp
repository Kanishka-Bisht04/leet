class Solution {
    public:
        int maximumGain(string s, int x, int y) {
                return x > y ? gain(s, "ab", x, "ba", y) : gain(s, "ba", y, "ab", x);
                    }

                    private:
                        int gain(string& s, string first, int x, string second, int y) {
                                stack<char> stk;
                                        int total = 0;
                                                for (char c : s) {
                                                            if (!stk.empty() && stk.top() == first[0] && c == first[1]) {
                                                                            stk.pop();
                                                                                            total += x;
                                                                                                        } else {
                                                                                                                        stk.push(c);
                                                                                                                                    }
                                                                                                                                            }
                                                                                                                                                    string rem;
                                                                                                                                                            while (!stk.empty()) {
                                                                                                                                                                        rem += stk.top();
                                                                                                                                                                                    stk.pop();
                                                                                                                                                                                            }
                                                                                                                                                                                                    reverse(rem.begin(), rem.end());
                                                                                                                                                                                                            for (char c : rem) {
                                                                                                                                                                                                                        if (!stk.empty() && stk.top() == second[0] && c == second[1]) {
                                                                                                                                                                                                                                        stk.pop();
                                                                                                                                                                                                                                                        total += y;
                                                                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                                                                                    stk.push(c);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                return total;
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                    };

