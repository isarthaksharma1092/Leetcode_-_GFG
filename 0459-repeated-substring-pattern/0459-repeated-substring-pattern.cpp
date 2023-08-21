class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        int n = str.length();
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                string pattern = "";
                for (int j = 0; j < n / i; j++) {
                    pattern += str.substr(0, i);
                }
                if (str == pattern) {
                    return true;
                }
            }
        }
        return false;
    }
};