#include <bits/stdc++.h>
using namespace std;

int consecutive_ones(vector<int> nums)
{
    int count = 0;
    int maxi = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        maxi = max(maxi, count);
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
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int ans = consecutive_ones(nums);
        cout << ans;
    }

    return 0;
}