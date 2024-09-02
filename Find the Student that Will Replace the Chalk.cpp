class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) 
    {
        int i=0;
        
        long long int sum=0;
        
        for(auto s:chalk)
        {
            sum=sum+s;
        }
        
        while(sum<k)
        {
            k=k-sum;
        }
        
        
        while(k!=0)
        {
            if(k<0)
            {
                return --i;
            }
            
            if(i==chalk.size())
            {
                i=0;
            }
            k=k-chalk[i++];
            
        }
        
        if(i==chalk.size())
        {
            return 0;
        }
        return i;
    }
};
