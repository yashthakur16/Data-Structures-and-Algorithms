#include <bits/stdc++.h> 
bool isPossibleToSplit(int n, vector<int> &arr) 
{
    unordered_map<int,int> mpp;
    if(n==1)
    {
        return false;
    }

    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    int count=mpp[arr[0]];
    if(count==1)
    {
        return false;
    }

    for(auto i: mpp)
    {
        if(i.second!=count)
        {
            return false;
        }
    }

    return true;
}
