vector<int> MinimumCoins(int n)
{
    vector<int> ans;

    while(n!=0)
    {
        if(n>=1000)
        {
            ans.push_back(1000);
            n=n-1000;
        }
        else if(n>=500)
        {
            ans.push_back(500);
            n=n-500;
        }
        else if(n>=100)
        {
            ans.push_back(100);
            n=n-100;
        }
        else if(n>=50)
        {
            ans.push_back(50);
            n=n-50;
        }
        else if(n>=20)
        {
            ans.push_back(20);
            n=n-20;
        }
        else if(n>=10)
        {
            ans.push_back(10);
            n=n-10;
        }
        else if(n>=5)
        {
            ans.push_back(5);
            n=n-5;
        }
        else if(n>=2)
        {
            ans.push_back(2);
            n=n-2;
        }
        else
        {
            ans.push_back(1);
            n=n-1;
        }
      
    }
    return ans;
}
