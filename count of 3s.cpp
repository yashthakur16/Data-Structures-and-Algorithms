#include <bits/stdc++.h> 

long long int countOf3(int x) 
{
     long long int count=0;
     for(int i=0;i<=x;i++)
     {
          string str=to_string(i);
          for(char digit:str)
          {
               if(digit=='3')
               {
                    count++;
               }
          }
     }
     return count;
}
