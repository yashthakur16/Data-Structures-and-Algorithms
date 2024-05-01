class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int n=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                n=i;
                break;
            }
        }
        
        int i=0;
        
        while(i<=n)
        {
            swap(word[i],word[n]);
            i++;
            n--;
        }
        
        return word;
    }
};
