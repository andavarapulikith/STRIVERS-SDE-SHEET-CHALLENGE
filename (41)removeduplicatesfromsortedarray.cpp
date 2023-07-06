int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int move=1;
	int indi=1;
	while(move<n)
	{
		if(arr[move]==arr[move-1])
		{
			++move;
		}
		else{
			arr[indi]=arr[move];
			++indi;
			++move;
		}
	}
	return indi;
}