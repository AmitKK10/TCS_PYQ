#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int num)
{
  int temp = num;
  int reverse = 0;
  while(temp!=0)
{ 
  int digit = temp%10;
  reverse = reverse*10+digit;
  temp = temp/10;
}
  return reverse == num;
}

int main()
{
  bool result = Palindrome(1031);
  cout<<result;
return 0;
}