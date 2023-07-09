#include <vector>

#include <algorithm>

int getMedian(vector<vector<int>> &matrix)

{

int n = matrix.size();

int m = matrix[0].size();

vector<int> ans;

for(int i = 0;i<n;i++)

{

for(int j =0;j<m;j++)

{

ans.push_back(matrix[i][j]);

}

}

 

std::sort(ans.begin(),ans.end());

int size = ans.size();

int mid = size/2;

return ans[mid];

 

}