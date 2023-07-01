bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m=mat.size();
    int n=mat[0].size();
    int flag=0;
    for(int i=0;i<m;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(mat[i][j]==target)
            return true;
            if(mat[i][j]<target)
            break;
            if(mat[i][j]>target)
            flag=1;
        }
        if(flag==1)
        break;
    }
    return false;
        
}