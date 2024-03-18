#include <bits/stdc++.h> 
void isfour(int n,vector<int> &divisor)
{
    vector<int> divisorcount;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            divisorcount.push_back(i);
        }
        if(count>4)
        {
            return ;
        }
    }
    if(count==4)
    {
        for(int i=0;i<4;i++)
        {
            divisor.push_back(divisorcount[i]);
        }
    }
    return ;

    
}
int sumFourDivisors(vector<int> &arr, int n)
{
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        isfour(arr[i],ans);
    }
    int count=0;

    for(int i=0;i<ans.size();i++)
    {
        count=count+ans[i];
    }

    return count;
}
