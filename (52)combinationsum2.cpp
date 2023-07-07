#include<bits/stdc++.h>


void recursion(vector<int>arr,int sum,int target,vector<vector<int>>&ans,vector<int>temp,int indi)
{
  if (sum == target) {
    ans.push_back(temp);
	return;
  }
  if(sum>target)
  return;
  if(indi>=arr.size())
  return;
  for (int i = indi; i < arr.size(); i++) {
	  if(i>indi&&arr[i]==arr[i-1])
	  continue;
	  int sum2=sum+arr[indi];
	  if(sum2>target)
	  break;
    temp.push_back(arr[i]);
    recursion(arr, sum + arr[i], target, ans, temp, i + 1);
    temp.pop_back();
  }
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;
	vector<int>temp;
	recursion(arr,0,target,ans,temp,0);
	return ans;
	
}
