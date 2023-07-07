vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
   
    vector<vector<int>>ans;
    for(int i=0;i<1<<n;i++)
    {
        vector<int>temp;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(i&1<<j)
            {
             sum+=arr[j];
             temp.push_back(arr[j]);
            }
           
        }
        if(sum==k)
        ans.push_back(temp);
    }
    return ans;
}