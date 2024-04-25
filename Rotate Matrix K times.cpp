#include <bits/stdc++.h> 
vector<vector<int>> solve(vector<vector<int>> &arr, int k)
{
    vector<vector<int>> ans;
    int n=arr.size();
    int m=arr[0].size();

    for(int i=0;i<n;i++)
    {
        vector<int>row(m);
        for(int j=0;j<m;j++)
        {
            row[(j+k)%m]=arr[i][j];
        }
        ans.push_back(row);
    }

    return ans;
   
}
