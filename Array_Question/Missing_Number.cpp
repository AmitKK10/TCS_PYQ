#include<bits/stdc++.h>
using namespace std;

long long MissingNumber(vector<int> &num)
{
    int n = num.size();
    long long TotSum= ((n+1)*(n+2))/2;

    long long sum = 0;

    for(int i=0;i<n;i++)
    {
        sum+=num[i];
    }

    return  (TotSum-sum);
}

int main()
{
    vector<int> num = {1,2,3,5,6,4,8};
    long long result = MissingNumber(num);
    cout<<result;
}