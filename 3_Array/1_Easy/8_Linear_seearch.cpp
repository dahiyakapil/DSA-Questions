#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int number)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {

            return i;
        }
    }
    return -1;
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

        int number;
        cin >> number;

        int res = linear_search(arr, n, number);
        cout << res;
    }

    return 0;
}