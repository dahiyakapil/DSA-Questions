#include <bits/stdc++.h>
using namespace std;

string two_sum_brute(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return "YES";
            }
        }
    }
    return "NO";
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
        int target;
        cin >> target;
        cout << two_sum_brute(arr, n, target);
    }
    return 0;
}