#include <bits/stdc++.h> 
bool isStrobogrammatic(string &n)
{
    int j=n.size()-1;
    string ans=n;


    for(int i=0;i<=j;i++)
    {
        if(n[i]!='1'&&n[i]!='0'&&n[i]!='6'&&n[i]!='8'&&n[i]!='9')
        {
            return false;
        }
        if(n[i]=='6')
        {
            n[i]='9';
        }
        else if(n[i]=='9')
        {
            n[i]='6';
        }
    }

    
    int i=0;

    while(i<j)
    {
        swap(ans[i],ans[j]);
        i++;
        j--;
    }

    if(ans==n)
    {
        return true;
    }


    return false;
}
