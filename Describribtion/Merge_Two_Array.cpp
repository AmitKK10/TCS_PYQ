#include<bits/stdc++.h>
using namespace std;

vector<int> Merge(vector<int> & nums1,int n,vector<int> & nums2,int m)
{
  vector<int> temp(nums1.begin(),nums1.begin()+n);

   temp.insert(temp.end(),nums2.begin(),nums2.begin()+m);

   sort(temp.begin(),temp.end());

   return temp;

}

int main()
{ 
  vector<int> nums1={1,2,3,0,0,0};
  vector<int> nums2={2,5,6};

  vector<int> result= Merge(nums1,3,nums2,3);

  for(int num : result)
  {
    cout<<num<<" ";
  }

    return 0;
}