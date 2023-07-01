#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	int k=m+n-2;
	int l=m-1;
	int ans=1;
	for(int i=1;i<=l;i++)
	{
      ans=ans*(k-l+i)/i;

	}
	return ans;
	// Write your code here.
}