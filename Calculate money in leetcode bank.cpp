class Solution {
public:
    int totalMoney(int n) 
    {
        int ans=0;
        int start=1;
        int week=7;
        while(n>0)
        {
            int i=start;
            for(i;i<=week;i++)
            {
                ans=ans+i;
                n--;
                if(n<=0)
                {
                    return ans;
                }
                
            }
            week++;
            start++;
        }
        return ans;
    }
};
