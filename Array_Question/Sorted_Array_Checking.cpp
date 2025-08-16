#include<bits/stdc++.h>

using namespace std;

bool IsSorted( vector<int> &arr)
{
  int n = arr.size();
  
  for(int  i=1;i<n;i++)
  {
    if(arr[i-1] > arr[i] )
    {
      return false;
    }
    
  }
  return true;
}

int main()
{
  vector<int> arr = {1,23,45,66,6,93};
  bool result = IsSorted(arr);
  cout<<boolalpha <<result;
  return 0;
}