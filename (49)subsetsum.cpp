vector<int> subsetSum(vector<int> &num){
	// Write your code here.	
	int n=num.size();
	vector<int>ans;
	for(int i=0;i<1<<n;i++)
	{
		 int sum=0;
	 for(int j=0;j<=n-1;j++)
	 {
		 if(i&(1<<j))
		 {
			 sum+=num[j];
		 }
	 }
	 ans.push_back(sum);
	}
	sort(ans.begin(),ans.end());
	return ans;
}