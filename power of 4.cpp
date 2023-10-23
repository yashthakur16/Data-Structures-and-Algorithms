class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n<1)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }
        int i=1;
        while(true)
        {
            if(pow(4,i)==n)
            {
                return true;
            }
            else if(pow(4,i)>n)
            {
                return false;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};
