#include<bits/stdc++.h>
using namespace std;

int CountNumber(vector<int> &arr)
{
  int n = arr.size();
  int key = arr[0];
  int unique=1;
  for(int i=1;i<n;i++)
{
  if(arr[i]>key)
{ 
   unique++;
   key = arr[i];
}
}
  return unique;
}

int main()
{
vector<int> arr = {7,4,8,2,9};
int result = CountNumber(arr);
cout<<result;
return 0;
}