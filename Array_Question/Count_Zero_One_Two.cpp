#include<bits/stdc++.h>
using namespace std;

vector<int> Count012(vector <int> &arr)
{
    int n = arr.size();
    int countZero=0, countOne=0,countTwo=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0) countZero++;

        else if (arr[i] == 1) countOne++;

        else countTwo++;
    }

      /*
      
       arr.clear();
        
        for(int j=0;j<countZero;j++)
        {
            arr.push_back(0);
        }
        
         
        for(int j=countZero;j<countZero+countOne;j++)
        {
             arr.push_back(1);
        }
        
         
        for(int j=countZero+countOne;j<countZero+countOne+countTwo;j++)
        {
             arr.push_back(2);
        }
      
      */
        

    int index =0;

    for(int j =0;j<countZero;j++)
    {
        arr[index++] =0;
    }

      for(int j =0;j<countOne;j++)
    {
        arr[index++] =1;
    }

      for(int j =0;j<countTwo;j++)
    {
        arr[index++] =2;
    }

    return arr;
}

int main()
{
  vector<int> arr = {1,2,1,0,2,2,0,2,1,0,0,1,2,0,1,1};
 
  vector<int> result = Count012(arr);
 
  for(int num : result)
  {
    cout<<num<<" ";
  }

   return 0;
}