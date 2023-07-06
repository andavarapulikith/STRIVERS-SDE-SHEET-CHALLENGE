#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>>ans;
	sort(arr.begin(),arr.end());
	int i=0;
	int j=1;
	int k=n-1;
	while(i<j)
	{
		j=i+1;
		k=n-1;
		while(j<k)
		{
			if(arr[i]+arr[j]+arr[k]==K)
			{
				vector<int>temp;
				temp.push_back(arr[i]);
				temp.push_back(arr[j]);
				temp.push_back(arr[k]);
				ans.push_back(temp);
				int kl=j;
				++j;
				while(arr[j]==arr[kl])
				++j;
				int lk=k;
			    --k;
				while(arr[k]==arr[lk]&&j<k)
				--k;
			    
			}
			else if(arr[i]+arr[j]+arr[k]>K)
			--k;
			else
			++j;
		}
	   int kk=i;
	   ++i;
	   while(arr[i]==arr[kk])
	   ++i;
	}
	return ans;
}