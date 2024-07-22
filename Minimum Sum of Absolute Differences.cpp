#include <bits/stdc++.h> 
int minimumSum(vector<int>& arr1, vector<int>& arr2, int n)
{
   sort(arr1.begin(),arr1.end());
   sort(arr2.begin(),arr2.end());

    int ans=0;
    
   for(int i=0;i<n;i++)
   {
       ans=ans+abs(arr1[i]-arr2[i]);
   }

   return ans;
}
