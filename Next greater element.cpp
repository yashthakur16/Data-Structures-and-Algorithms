#include <bits/stdc++.h> 
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
    vector<int> ans(n,-1);
    stack<int> st;

    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty())
        {
            if(arr[i]<st.top())
            {
                ans[i]=st.top();
                break;
            }
            else
            {
                st.pop();
            }
            
        }
        st.push(arr[i]);

        
    }
    return ans;

}
