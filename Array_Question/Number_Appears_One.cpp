#include<bits/stdc++.h>

using namespace std;


int FindOnce(vector<int> & num)
{
    int number =0;
    for(int i=0;i<num.size();i++)
    {
        number = number xor num[i];
    }

    return number;
}

int main()
{
     vector<int> num = {1,234,55,24,1,234,33,44,24,44,55};
     int result = FindOnce(num);
     cout<<result;
     return  0;
}