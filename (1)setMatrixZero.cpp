#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int m=matrix.size();
	int n=matrix[0].size();
	int column0=1;
	for(int i=0;i<m;i++)
	{
       for(int j=0;j<n;j++)
	   {
		   if(matrix[i][j]==0)
		   {
			   matrix[i][0]=0;
			   if(j!=0)
			   matrix[0][j]=0;
			   else
			   column0=0;
		   }
	   }
	}
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(matrix[i][0]==0||matrix[0][j]==0)
			matrix[i][j]=0;
		}
	}
	if(matrix[0][0]==0)
	{
		for(int i=0;i<n;i++)
		{
			matrix[0][i]=0;
		}
	}
    if(column0==0)
	{
		for(int i=0;i<m;i++)
		{
		  matrix[i][0]=0;
		}
	}
}