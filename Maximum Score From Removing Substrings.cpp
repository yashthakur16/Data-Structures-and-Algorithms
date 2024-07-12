class Solution {
public:
    int solve_ba(string s, int x, int y) {
        int ans = 0;
        stack<char> st;
        for(auto c: s) {
            if(!st.empty() && c == 'a' && st.top() == 'b') {
                ans += y;
                st.pop();
            } else {
                st.push(c);
            }
        }
        
       
        string remaining;
        while (!st.empty()) {
            remaining.push_back(st.top());
            st.pop();
        }
        reverse(remaining.begin(), remaining.end());
        
        for(auto c: remaining) {
            if(!st.empty() && c == 'b' && st.top() == 'a') {
                ans += x;
                st.pop();
            } else {
                st.push(c);
            }
        }

        return ans;
    }

    int solve_ab(string s, int x, int y) {
        int ans = 0;
        stack<char> st;
        for(auto c: s) {
            if(!st.empty() && c == 'b' && st.top() == 'a') {
                ans += x;
                st.pop();
            } else {
                st.push(c);
            }
        }
       
        string remaining;
        while (!st.empty()) {
            remaining.push_back(st.top());
            st.pop();
        }
        reverse(remaining.begin(), remaining.end());
        
        for(auto c: remaining) {
            if(!st.empty() && c == 'a' && st.top() == 'b') {
                ans += y;
                st.pop();
            } else {
                st.push(c);
            }
        }

        return ans;
    }

    int maximumGain(string s, int x, int y) {
        int ans = 0;
        if(x > y) {
            ans = solve_ab(s, x, y);
        } else {
            ans = solve_ba(s, x, y);
        }
        
        return ans;
    }
};
