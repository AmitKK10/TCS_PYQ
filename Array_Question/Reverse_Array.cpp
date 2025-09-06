#include<bits/stdc++.h>
using namespace std;

void ReverseArray(vector<int> & arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int num :arr)
    {
        cout<<num<<" ";
    }
}

int main()
{
    vector<int> arr = {1,2,6,7,13,45};
    ReverseArray(arr);
    return 0;
}