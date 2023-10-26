class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector <int> ans;
        int p=1;

        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(p);
            p=p*nums[i];
        }

        int s=1;

        for(int i=nums.size()-1;i>=0;i--)
        {
            ans[i]=ans[i]*s;
            s=s*nums[i];
        }

        return ans;
    }
};
