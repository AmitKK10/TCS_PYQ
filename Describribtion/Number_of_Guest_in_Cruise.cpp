#include<bits/stdc++.h>
using namespace std;

int CountGuest(int E[] , int L[], int T)
{
    int result[T];
    
    result[0] = E[0]-L[0];

    for(int i=1;i<T;i++)
    {
       result[i] = result[i-1]+E[i]-L[i];
    }

    int maxGuest = result[0];

    for(int j = 1; j<T;j++)
    {
       if(result[j]>maxGuest)
    {
        maxGuest= result[j];
        
    }
 
    }
    
      return maxGuest;
}

int main ()
{
    int E[] ={7,0,5,1,3};
    int L[] ={1,2,1,3,4};
    int result = CountGuest(E,L,5);
    cout<<result;
    return 0;

}