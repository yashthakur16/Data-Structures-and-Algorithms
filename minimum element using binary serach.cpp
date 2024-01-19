int findMin(vector<int>& arr)
{
	int start=0;
	int end=arr.size()-1;
	
	while(start<end)
	{
		int middle=start+((end-start)/2);

		if(arr[middle]<arr[end])
		{
			end=middle;
		}
		else 
		{
			
			start=middle+1;
		}
		

	}

	return arr[start];

}
