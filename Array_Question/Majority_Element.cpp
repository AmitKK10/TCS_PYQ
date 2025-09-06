#include <bits/stdc++.h>
using namespace std;

int MajorityElement(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> freq;

    for (int num : arr)
    {
        freq[num]++;
    }

    for (auto &ans : freq)
    {
        if (ans.second > n / 2)
        {
            return ans.first;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 23, 21, 1, 1, 2, 1, 1, 1};
    int result = MajorityElement(arr);
    cout << result;
    return 0;
}