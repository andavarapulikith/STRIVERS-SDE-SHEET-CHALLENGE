vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end());
        int startpoint=intervals[0][0];
        int endpoint=intervals[0][1];
        vector<vector<int>>ans;
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i][0]>endpoint)
            {
              vector<int>temp;
              temp.push_back(startpoint);
              temp.push_back(endpoint);
              ans.push_back(temp);
              startpoint=intervals[i][0];
              endpoint=intervals[i][1];
            }
            else
            {
                endpoint=max(endpoint,intervals[i][1]);
            }
        }
        vector<int>temp;
              temp.push_back(startpoint);
              temp.push_back(endpoint);
              ans.push_back(temp);
              
        return ans;
}
