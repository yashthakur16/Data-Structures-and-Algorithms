#include <bits/stdc++.h> 
int fishEater(vector<int> &fishes) 
{
   stack<int> st;
   st.push(fishes[0]);

   for(int i=1;i<fishes.size();i++)
   {
       if(fishes[i]<st.top())
       {
           continue;
       }
       else
       {
           st.push(fishes[i]);
       }
   }

   return st.size();
 
}
