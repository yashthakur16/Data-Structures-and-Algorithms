class Solution {
public:
    int passThePillow(int n, int time) 
    {
        if(n>time)
            return time+1;
        
        
        int round=time/(n-1);
        int extra=time%(n-1);
        
        if(round%2==0)
        {
            return extra+1;
        }
        else
        {
            return n-extra;
        }
        
        return 0;
        
    }
};
