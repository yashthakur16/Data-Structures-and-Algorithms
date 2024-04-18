#include <bits/stdc++.h>

bool SD (int n)
{
  int i=n;

  while(i!=0)
  {
      int num=i%10;
      if(num==0||n%num!=0)
      {
          return false;
      }
      i=i/10;
  }

  return true;
}

vector < int > findAllSelfDividingNumbers(int lower, int upper) 
{
    vector<int> ans;

    for(int i=lower;i<=upper;i++)
    {
        if(i<=0)
        {
            continue;
        }
        else if(i<10)
        {
            ans.push_back(i);
        }
        else
        {
            if(SD(i))
            {
                ans.push_back(i);
            }
        }
    }   

    return ans;
}
