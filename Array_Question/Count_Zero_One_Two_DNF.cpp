#include<bits/stdc++.h>
using namespace std;

vector<int> Count012(vector<int> &arr)
{
    int n = arr.size();

    int low = 0, mid= 0, high = n-1;

    while(mid<=high)
    {
        if(arr[mid] == 0)
        {
          swap(arr[mid],arr[low]);
          low++;
          mid++;
        }

        else if(arr[mid] == 1)
        {
          mid++;
        }

        else
        {
          swap(arr[mid],arr[high]);
          high--;
        }


    }

    return arr;
}


int main()
{
  vector<int> arr = {1,2,1,0,2,2,0,2,1,0,0,1,2,0,1,1};
 
  vector<int> result = Count012(arr);
 
  for(int num : result)
  {
    cout<<num<<" ";
  }

   return 0;
}

