class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        set<int> s1,s2;

        for(auto i : nums1)
        {
            s1.insert(i);
        }
        for(auto i : nums2)
        {
            s2.insert(i);
        }

        for(auto i : s2)
        {
            if(s1.find(i)!=s1.end())
            {
                ans.push_back(i);
            }

        }    

        return ans;
    }
};
