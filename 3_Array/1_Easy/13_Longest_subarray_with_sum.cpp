#include <bits/stdc++.h>
using namespace std;


//Only for positive and negative but not for zeroes
int longest_subarray_optimal(int arr[], int n, int k)
{
    int left = 0;
    int right = 0;
    int sum = arr[0];
    int maxLen = 0;

    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum = sum - arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }


        right++;
        if (right < n)
        {
            sum = sum + arr[right];
        }
    }
    return maxLen;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k;
        cin >> k;
        cout<<longest_subarray_optimal(arr, n, k);
    }

    return 0;
}