#include<bits/stdc++.h>


int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2) 
{
    int ans=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans=max(ans,arr1[i]^arr2[j]);
        }
        
    }
    
    return ans;
}
