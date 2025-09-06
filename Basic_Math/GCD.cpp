#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    int n = min(a,b);
    int gcd=1;
    for(int i=1;i<=n;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd =i;
        }
    }

    return gcd;
}

int main()
{
    int result = GCD(20,28);
    cout<<result;
    return   0;
}