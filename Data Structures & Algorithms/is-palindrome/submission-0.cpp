class Solution {
public:
    bool isPalindrome(string s) {
        return s == string(s.rbegin(), s.rend());
    }
};