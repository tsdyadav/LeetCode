
class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0) return false;      

        string num = to_string(x);
        string rev = num;              
        reverse(rev.begin(), rev.end());
        
        return num == rev; 
    }
};