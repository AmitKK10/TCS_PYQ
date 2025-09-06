#include<bits/stdc++.h>
using namespace std;

vector<int> RightRotate( vector<int> & arr, int RotateValue)
{
 
  RotateValue = RotateValue % arr.size();
  vector<int> temp1(arr.end()-RotateValue,arr.end());
  vector<int> temp2(arr.begin(),arr.end()-RotateValue);
  temp1.insert(temp1.end(),temp2.begin(),temp2.end());
  
  return temp1;

}

int main()
{
  vector<int> arr = {1,2,3,4,5,6,7,8,9};
  vector<int> result = RightRotate(arr,5);
  
  for(int num : result)
  {
    cout<<num<<" ";
  }
 return 0;
}