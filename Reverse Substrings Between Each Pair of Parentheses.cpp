class Solution {
public:
    string reverseParentheses(string s) 
    {
        int n=s.size();
        vector<int> oppIndex(n);
        stack<int> st;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                int index=st.top();
                oppIndex[index]=i;
                oppIndex[i]=index;
                st.pop();
            }
        }
        
        string ans;
        int direction=1;
        
        for(int i=0;i<n;i+=direction)
        {
            if(s[i]=='('||s[i]==')')
            {
                i=oppIndex[i];
                direction=-direction;
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};
