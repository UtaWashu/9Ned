**Задача:**
**1502.A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.**
**Решение:**
```cpp
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
      std::sort(arr.begin(), arr.end());

        int diff = arr[1] - arr[0]; // Calculate the common difference

        for (int i = 1; i < arr.size() - 1; ++i) {
            if (arr[i + 1] - arr[i] != diff) {
                return false;
            }
        }

        return true;  
    }
};
```
**Задача:**
**1925.A square triple (a,b,c) is a triple where a, b, and c are integers and a2 + b2 = c2.**
**Решение:**
```cpp
class Solution {
public:
    int countTriples(int n) {
       int res = 0;
        for (int a = 1; a <= n; ++a) {
            for (int b = 1; b <= n; ++b) {
                int t = a * a + b * b;
                int c = (int) sqrt(t);
                if (c <= n && c * c == t) {
                    ++res;
                }
            }
        }
        return res; 
    }
};
```
**Задача:**
**2696.You are given a string s consisting only of uppercase English letters.**
**Решение:**
```cpp
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
```