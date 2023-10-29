#include <bits/stdc++.h> 
int squareRoot(int a)
{
	int ans=0;
	for(int i=0;i<=a;i++)
	{
		if((i*i)<=a)
		{
			ans=i;
		}
		else
		{
			return ans;
		}
	}

	return ans;
}
