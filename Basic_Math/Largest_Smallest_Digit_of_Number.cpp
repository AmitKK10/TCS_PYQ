#include<bits/stdc++.h>
using namespace std;

void Number(int n)
{
    int temp =n;
    int Largest = 0;
    int Smallest = 9;
   while(temp > 0)
   {
    int digit = temp%10;
    temp=temp/10; 
    Largest = max(digit,Largest);
    Smallest = min(digit,Smallest);

   }

   cout<<Largest<<Smallest;
}

int main()
{ 
   Number(27834);
    return  0;
}
