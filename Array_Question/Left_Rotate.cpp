#include<bits/stdc++.h>
using namespace std;

vector<int> RotateArray(vector<int> &arr , int RotateValue)
{
    RotateValue = RotateValue % arr.size();
    vector<int> temp1 ( arr.begin() + RotateValue,arr.end());
    vector<int> temp2 (arr.begin(),arr.begin() + RotateValue);

    temp1.insert(temp1.end(),temp2.begin(),temp2.end());

    return temp1;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};

    vector<int> result = RotateArray(arr,3);

    for(int num : result)
    {
        cout<<num<<" ";
    }
    
    return 0;
}