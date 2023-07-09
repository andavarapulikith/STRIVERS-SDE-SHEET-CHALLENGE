#include <bits/stdc++.h> 

vector<int> solve(vector<int> array, vector<int> ans){

    for(int i=0; i<array.size(); i++){

        ans.push_back(array[i]);

    }

    return ans;

}

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)

{

    vector<int> ans;

    int n=kArrays.size();

    for(int i=0; i<k; i++){

        ans=solve(kArrays[i], ans);

        }

    sort(ans.begin(), ans.end());

    return ans;

}
