#include<bits/stdc++.h>
using namespace std;

int SecondMax(vector<int> &arr)
{
   int max1 = INT_MIN, max2 = INT_MIN;
   for(int num : arr)
   {
    if(num>max1)
    {
        max2=max1;
        max1=num;
    }

    else if(num<max1 && num>max2)
    {
        max2=num;
    }

   }

   return (max2== INT_MIN)?-1:max2;
}

int main()
{
    vector<int> arr = {34, 34};
    cout<<SecondMax(arr);
    return 0;
}