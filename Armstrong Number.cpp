#include <bits/stdc++.h> 
bool isArmstrong(int num) 
{
    
    int ans=num;
    int k=0;
    while(ans!=0)
    {
        k++;
        ans=ans/10;
    }
    ans=num;
    int sum=0;

    while(ans!=0)
    {
        int digit=ans%10;
        sum=sum+(pow(digit,k));
        ans=ans/10;
    }
    if(sum==num)
    {
        return true;
    }
    return false;

}
