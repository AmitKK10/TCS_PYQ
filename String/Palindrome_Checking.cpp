
#include <bits/stdc++.h>
using namespace std;

bool Palindrome(string &s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
       if(tolower(s[start++]) != tolower(s[end--])) return false;
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter Any String: ";
    getline(cin, s);
    bool result = Palindrome(s);

    if (result)
        cout << "Is Palindrome \n";
    else
        cout << "Not Palindrome \n";
    return 0;
}