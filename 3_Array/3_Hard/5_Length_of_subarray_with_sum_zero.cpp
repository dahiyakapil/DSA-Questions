#include <bits/stdc++.h>
using namespace std;

int subarray_sum_zero_brute(vector<int> &arr)
{
    int n = arr.size();
    int maxLen = 0;
    unordered_map<int, int> mpp;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum == 0)
        {
            maxLen = i + 1;
        }
        else if (mpp.find(sum) != mpp.end())
        {
            maxLen = max(maxLen, i - mpp[sum]);
        }
        else
        {
            mpp[sum] = i;
        }
    }
    return maxLen;
}

int subarray_sum_zero_optimal(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int,int> mpp;
    int maxi = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            maxi = i + 1;
        }
        else{
            if(mpp.find(sum)!=mpp.end()){
                maxi = max(maxi, i-mpp[sum]);
            }
            else{
                mpp[sum] = i;
            }
        }
    }
    return maxi;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // cout << subarray_sum_zero_brute(arr);
        cout << subarray_sum_zero_optimal(arr);
    }
}