#include<bits/stdc++.h>
using namespace std;

vector<int> MoveAllZero( vector<int> & arr)
{
  int n = arr.size();
  int zeroCount =0;
  vector<int> temp;
  
  for(int num: arr)
   {
     if(num == 0)
      {
        zeroCount ++;
      }
     else temp.push_back(num);
   }
  temp.insert(temp.end(),zeroCount,0);
  arr=temp;
 return arr;
}

int main()
{
 vector<int> arr = {1,0,34,3,0,0,4,45,0,0,2};
 vector<int> result = MoveAllZero(arr);
 for(int num : result)
 
{
  cout<<num<<" ";
}
  return 0;
}