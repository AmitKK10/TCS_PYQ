#include<bits/stdc++.h>
using namespace std;

bool IsPrime( int n)
{ 
  if(n<=1) return false;
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      return false;
    }
  }
    return true; 
}

int main()
{
  bool result = IsPrime(0);
  cout<<result;
  return 0;
}