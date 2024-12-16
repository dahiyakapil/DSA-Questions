#include <bits/stdc++.h>
using namespace std;

void reverseArray(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverseArray(i + 1, arr, n);
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// void reverseUsingTwoPointer(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         while (l < r)
//         {
//             swap(arr[l], arr[r]);
//             reverseUsingTwoPointer(arr, l + 1, r - 1);
//         }
//     }
// }

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

        // reverseArray(0, arr, n);
        // reverseUsingTwoPointer(arr, 0, n - 1);
        // reverseArray(arr, n);
        printArray(arr, n);
    }

    return 0;
}