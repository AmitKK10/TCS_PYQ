#include <bits/stdc++.h>
using namespace std;

int MaxSubArr(vector<int> &arr, int k)
{
    int n = arr.size();
    if (n < k)
        return -1;
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int maxsum = sum;
    for (int i = 1; i <= n - k; i++)
    {
        sum = sum - arr[i - 1] + arr[i + k - 1];
        maxsum = max(sum, maxsum);
    }

    return maxsum;
}

int main()
{
    vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int result = MaxSubArr(arr, 4);
    cout << result;
    return 0;
}