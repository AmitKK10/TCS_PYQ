#include <bits/stdc++.h>
using namespace std;

bool IsAlphaNumeric(char ch )
{
return ( (ch >= '0' && ch <= '9') ||
             (ch >= 'a' && ch <= 'z') ||
             (ch >= 'A' && ch <= 'Z') );
    
}

bool IsPalindrome(string &s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
        if (!IsAlphaNumeric(s[start]))
        {
             start++;
            continue;
           
        }

        if (!IsAlphaNumeric(s[end]))
        {
             end--;
            continue;
           
        }

        else if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
           
        }

         start++;
         end--;
    }
    return true;
}

int main()
{
    string s;
    cout << "Enter Any String : ";
    getline(cin, s);

    bool result = IsPalindrome(s);

    if (result)
        cout << "Is Palindrome \n";
    else
        cout << "Is not palindrome \n";

    return 0;
}