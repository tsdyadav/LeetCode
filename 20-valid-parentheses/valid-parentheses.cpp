#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(char ch : s) {
            
            // If opening bracket, push to stack
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                // If stack empty, invalid
                if(st.empty()) return false;
                
                char top = st.top();
                st.pop();
                
                // Check matching
                if((ch == ')' && top != '(') ||
                   (ch == '}' && top != '{') ||
                   (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }
        
        // If stack empty at end → valid
        return st.empty();
    }
};
