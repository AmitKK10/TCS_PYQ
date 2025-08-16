#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int num)
{
  string s = to_string(num);
  string rev = s;
  reverse(rev.begin(),rev.end()); 
  return rev == s;
}

int main()
{
  bool result = Palindrome(111);
  cout<<result;
return 0;
}