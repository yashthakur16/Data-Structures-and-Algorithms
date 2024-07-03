class Solution {
public:
    int minDifference(vector<int>& nums) 
    {
        int n=nums.size();
        
        if(n<=4)
        {
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        int i=3;
        int j=n-1;
        
        int minDiff=INT_MAX;
        
        minDiff=min(minDiff,nums[j]-nums[i]);
        
        i=2;
        j=n-2;
        
        minDiff=min(minDiff,nums[j]-nums[i]);
        
        i=1;
        j=n-3;
        
        minDiff=min(minDiff,nums[j]-nums[i]);
        
        i=0;
        j=n-4;
        
        minDiff=min(minDiff,nums[j]-nums[i]);
        
        return minDiff;
    }
};
