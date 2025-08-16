#include<bits/stdc++.h>
using namespace std;

pair<int,int> GetminmaxVal(vector<int> & arr)
{
   int maxVal= arr[0];
   int minVal= arr[0];
   int n = arr.size();

   for(int i=1;i<n;i++)
   {
    if(arr[i]>maxVal)
    {
       maxVal= arr[i];
    }

    if(arr[i]<minVal)
    {
        minVal= arr[i];
    }
   }

   return {minVal,maxVal};
}

int main()
{
    vector<int> arr = {12,32,41,21,23,98,67,20,99,39,63,93,10};
   pair<int,int> result = GetminmaxVal(arr);
   cout<<result.first<<","<<result.second;
   return 0;
    
}