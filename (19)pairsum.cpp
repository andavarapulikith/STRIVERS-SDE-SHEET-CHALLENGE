#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int n=arr.size();
   sort(arr.begin(),arr.end());
   int left=0;
   int right=n-1;
   vector<vector<int>>ans;
   while(left<right)
   {
      int sum=arr[left]+arr[right];
      if(sum==s)
      {
         // cout<<"hello";
         vector<int>temp;
         temp.push_back(arr[left]);
         temp.push_back(arr[right]);
         int k=left;
         int r=right;
         ++left;
         --right;
         int cnt1=1,cnt2=1;
         while(arr[left]==arr[k])
         {
             ++cnt1;
             ++left;
         }
         while(arr[right]==arr[r]&&left<=right)
         {
            --right;
           ++cnt2;
         }
         // cout<<cnt1*cnt2;
         int su;
         if(arr[k]==arr[r])
         su=(cnt1)*(cnt1-1)/2;
         else 
         su=cnt1*cnt2;

         for(int i=0;i<su;i++)
         {
            ans.push_back(temp);
         }
      }
      else if(sum>s)
      --right;
      else
      ++left;
   }
   return ans;
}