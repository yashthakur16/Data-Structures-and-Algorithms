#include <bits/stdc++.h> 

bool ispalindrome(int k)
{
	if(k<10)
	{
		return true;
	}
	int original=k;
	int reversed=0;
	while(k!=0)
	{
		reversed=reversed*10+k%10;
		k=k/10;
	}

	return original==reversed;

}
vector<int> getPalindromes(int n)
{
	vector<int> ans;
	for(int i=1;i<=n;i++)
	{
		if(ispalindrome(i))
		{
			ans.push_back(i);
		}
	}

	return ans;
} 
