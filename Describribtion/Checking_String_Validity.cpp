#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int CountStar =0;
    int CountHash =0;

    for(char & c : s)
    {
        if(c == '*')
        {
            CountStar++;
        }

        else if( c == '#')
        {
            CountHash++;
        }
    }

    int result = CountStar -  CountHash;

    if(result>0)
    {
        cout<<"Positive Integer";
    }

    else if(result ==  0)
    {
        cout<<"Valid";
    }

    else cout<<"Negative Integer";

    return 0;
}
