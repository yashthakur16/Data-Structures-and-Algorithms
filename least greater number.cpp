#include <bits/stdc++.h> 
vector<int> leastGreaterElement(vector<int> &arr) 
{
   int index=1;
   

   int n=arr.size();
   if(n==1)
   {
       arr[0]=-1;
       return arr;
   }
   for(int i=0;i<n;i++)
   {
        
      int value=arr[i];
      bool skip=0;
      int greater=INT_MAX;
      
      for(int j=index;j<n;j++)
      {
            if(value<arr[j] && greater>arr[j])
            {
                greater=arr[j];
                arr[i]=arr[j];
                index=i+1;
                skip=1;
            }
            if (skip==0)
            {
                arr[i]=-1;
            }
      }
   }

   return arr;

}
