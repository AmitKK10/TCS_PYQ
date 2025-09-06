#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int num)
{
  string s = to_string(num);

int left = 0, right = s.length() - 1;
while (left < right) {
    if (s[left] != s[right])
        return false; 
    left++;
    right--;
}
return true; 
}

int main()
{
  bool result = Palindrome(5555);
  cout<<result;
return 0;
}
