#include <bits/stdc++.h> 
int specialSum(vector<int>& arr, int n)
{
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    while(sum>9)
    {
        int number=sum;
        sum=0;
        while(number !=0)
        {
            int digit=number%10;
            sum=sum+digit;
            number=number/10;
        }
    }

    return sum;
}
