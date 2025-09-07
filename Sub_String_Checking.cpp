#include <bits/stdc++.h>
using namespace std;

int IsPart(string &txt, string &part)
{
    int n = txt.length();
    int m = part.length();

    string temp;

    for (int i = 0; i <= n - m; i++)
    {
        temp = txt.substr(i, m);

        if (temp == part)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string txt = "amitkirankar";
    string part;
    cout << "Enter the your String : ";
    getline(cin, part);

    int result = IsPart(txt, part);
    cout << "The index is : " << result;
    return 0;
}