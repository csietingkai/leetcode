class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else if (x == 0) {
            return true;
        } else {
            string str = to_string(x);
            string str2 = to_string(x);
            reverse(str.begin(), str.end());
            return str.compare(str2) == 0;
        }
    }
};
