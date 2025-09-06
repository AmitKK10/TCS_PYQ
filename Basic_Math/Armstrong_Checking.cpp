#include<bits/stdc++.h>
using namespace std;

bool Armstrong(int n)
{
    int temp =n;
    int count =0;
    while(n!=0)
    {
        int digit = n%10;
        count  = count+digit*digit*digit;
    n = n/10;

    }

    return (temp==count);
}

int main()
{
    bool result = Armstrong(153);
    cout<<result;
    return 0;
}