#include <bits/stdc++.h>
using namespace std;

/*
TC : O(N)
SC : O(1) extra space 

*/

void left_rotate_array_by_1(int arr[], int n)
{
    // 1 2 3 4 5
    int temp = arr[0]; // stored 0th index in temp = 1
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i]; // Moving the element backward
    }
    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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

        left_rotate_array_by_1(arr, n);
    }
    return 0;
}