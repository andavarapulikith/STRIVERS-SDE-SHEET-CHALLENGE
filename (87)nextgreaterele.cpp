#include <bits/stdc++.h> 

 

vector<int> nextGreater(vector<int> &arr, int n) {

    stack<int> st;

    vector<int> ans;

 

    for(int i=n-1; i>=0; i--)

    {

        if(st.empty())

        {

            

            ans.push_back(-1);

            st.push(arr[i]);

        }

        else if(arr[i]<st.top())

        {

           

              ans.push_back(st.top());

              st.push(arr[i]);

        }

        else

        {

           

            while(!st.empty())

            {

              

                if(arr[i]<st.top())

                break;

                 // cout<<st.top()<<"."<<st.size()<<" ";

                st.pop();

            }

 

            if(st.empty())

            ans.push_back(-1);

            else

            ans.push_back(st.top());

            st.push(arr[i]);

 

        }

    }

  //  cout<<endl;

    reverse(ans.begin(), ans.end());

    return ans;

 

}