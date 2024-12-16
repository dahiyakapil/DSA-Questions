#include <bits/stdc++.h>
using namespace std;

/*
using the lower bound can be solved easily

*/
int searchInsertPositon_optimal_lowerBound(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
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
        int target;
        cin >> target;
        cout << searchInsertPositon_optimal_lowerBound(arr, n, target);
    }
    return 0;
}