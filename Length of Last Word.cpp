class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n=s.size();
        int ans=0;
        int count=0;
        int i=n-1;
        
        while(s[i]==' ')
        {
            i--;
        }

        while(i>=0&&s[i]!=' ')
        {
            i--;
            ans++;
        }

        return ans;

        
    }
};
