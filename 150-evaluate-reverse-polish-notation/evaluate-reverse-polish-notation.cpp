class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string &ch : tokens) {
            if (ch != "+" && ch != "-" && ch != "*" && ch != "/") {
                // operand → push as integer
                st.push(stoi(ch));
            } else {
                // operator → pop two operands
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int res = 0;

                if (ch == "+") res = a + b;
                else if (ch == "-") res = a - b;
                else if (ch == "*") res = a * b;
                else if (ch == "/") res = a / b;  // truncates toward 0

                st.push(res);
            }
        }
        return st.top();
    }
};
