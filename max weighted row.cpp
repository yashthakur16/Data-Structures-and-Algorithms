#include <bits/stdc++.h> 
int maximumWeightRow(int n, int m, vector<vector<int>> &mat) 
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=mat[i][j];
        }
        ans=max(sum,ans);
    }

    return ans;
}
