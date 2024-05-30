class Solution {
public:
    int minLength(string s) {
       std::stack<char> st;

        for (char c : s) {
            if (!st.empty() && ((st.top() == 'A' && c == 'B') || (st.top() == 'C' && c == 'D'))) {
                st.pop();
            } else {
                st.push(c);
            }
        }

        return st.size(); 
    }
};