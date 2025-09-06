#include<bits/stdc++.h>
using namespace std;

vector<int> TwoSum(vector<int> &arr, int target)
{
    int n = arr.size();
    vector<int> result;
    for(int i=0;i<n;i++)
    {  
        int need = target - arr[i];
        for(int j=i+1;j<n;j++)
        {
          if(need == arr[j])
          {
            result.push_back(i);
            result.push_back(j);
          }
        }
        
    }

    return result;
}


int main()
{
    vector<int> arr = {2,7,11,15};
    vector<int> num = TwoSum(arr,9);

    for(int nums : num)
    {
        cout<<nums<<" ";
    }
}