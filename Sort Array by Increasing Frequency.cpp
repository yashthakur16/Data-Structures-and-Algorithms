class Solution {
public:
    
    static bool cmp(int a,int b,unordered_map<int,int> &mpp)
    {
       if (mpp.at(a) == mpp.at(b))
    {
        return a > b;
    }
    return mpp.at(a)< mpp.at(b);
    }
    
    
    
    vector<int> frequencySort(vector<int>& nums) 
    {
        unordered_map<int,int> mpp;
        
        for(auto i:nums)
        {
            mpp[i]++;
        }
         
    sort(nums.begin(), nums.end(), [&mpp](int a, int b) {
        return cmp(a, b, mpp);
    });
    
    return nums;
        
      
    }
};
