#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySum_Optimal(vector<int> &arr)
{
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
        if (sum > maxi)
        {
            maxi = max(sum, maxi);
        }
        if (sum < 0)
        {
            sum = 0;
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
        cout<<maximumSubarraySum_Optimal(arr);
    }

    return 0;
}