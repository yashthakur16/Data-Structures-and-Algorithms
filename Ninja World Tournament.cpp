#include <bits/stdc++.h> 
int calculateScore(vector<string> &matchResult, int n)
{
   vector<int> ans;
   int prev=-1;

   for(int i=0;i<n;i++)
   {
       if(matchResult[i]=="C")
       {
           if(!ans.empty())
           ans.pop_back();
           prev--;
       }
       else if(matchResult[i]=="D")
       {
           ans.push_back(2*ans.back());
           prev++;
       }
       else if(matchResult[i]=="+")
       {
           ans.push_back(ans.back()+ans[prev-1]);
           prev++;
       }
       else
       {
           int num=std::stoi(matchResult[i]);
           ans.push_back(num);
           prev++;
       }
   }
   int sum=0;
   int size=ans.size();
   for (int i=0;i<size;i++)
   {
       sum=sum+ans[i];
   }

   return sum;
}
