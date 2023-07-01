#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	if(n==0)
	return 1;
    int ans=1;
	long long xk=x;
	while(n>0)
	{
		if(n%2==1)
		{
			ans=((ans%m)*(xk%m))%m;
			--n;
		}
		else
		{
			xk=((xk%m)*(xk%m))%m;
			n=n/2;
		}
	}
	return ans;

}