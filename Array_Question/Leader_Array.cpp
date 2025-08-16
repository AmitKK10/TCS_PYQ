#include<bits/stdc++.h>
using namespace std;

vector<int> LeaderArray(vector<int> &arr)
{
    int n = arr.size();
    vector<int> leader;

    int RightMax = arr[n-1];
    leader.push_back(arr[n-1]);

    for(int i=n-2;i>=0;i--)
    {
       if(arr[i]>RightMax)
       {
         leader.push_back(arr[i]);
         RightMax = arr[i];
       }
    }

    reverse(leader.begin(),leader.end());

    return leader;
}

int main()
{
    vector<int> arr = {1,2,1,6,42,5,26,22,4};

    vector<int> result = LeaderArray(arr);
    for(int  num : result)
    {
        cout<<num<<" ";
    }
    
    return 0;
}