int findMin(vector<int>& arr)
{
	int s=0;
	int e=arr.size()-1;
	if(arr[s]<=arr[e])
	{
		return arr[s];
	}

	while(s<=e)
	{
		int mid=s+((e-s)/2);

		if(arr[mid]>arr[mid+1])
		{
			return arr[mid+1];
		}
		else if (arr[mid]<arr[mid-1])
		{
			return arr[mid];
		}

		if(arr[mid]>arr[s])
		{
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}

	return -1;
}
