#include<bits/stdc++.h>
using namespace  std;

bool AreAnagram(string s1 , string s2)
{
  if(s1.length() != s2.length() ) return false;
  
  unordered_map<char,int> map1;
  unordered_map<char,int> map2;

  for( char ch :s1)
  {
    map1[ch]++;
  }

    for( char ch :s2)
  {
    map2[ch]++;
  }

  return (map1==map2) ? true: false;

  
}



int main()
{string s1, s2;

cout<<"Enter First String: ";
getline(cin,s1);

cout<<"Enter Second String: ";
getline(cin,s2);


bool result = AreAnagram(s1,s2);

cout<<result;

 return 0;
}