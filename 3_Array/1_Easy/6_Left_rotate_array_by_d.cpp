#include <bits/stdc++.h>
using namespace std;

void left_rotate_array_by_d_brute(int arr[], int n, int d)
{
    if (n == 0)
    {
        return;
    }
    d = d % n; // for rotation 20%7 =  6 rotation will be there
    if (d > n)
    {
        return;
    }
    int temp[d];

    // Putting the temp element into original array before d
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // for shifting to the left
    for (int i = d; i < n - d; i++)
    {
        arr[i - d] = arr[i]; // 3-3 = 0th index
    }

    // put temp to the last
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)]; // 0 1 2
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/*
TC : O(d)+O(d)+(n-d) = O(n+d)
SC : O(d) using d extra space

*/

void left_rotate_by_d(int arr[], int n, int d)
{

    // 1 2 3 4 5 6 7
    d = d % n; // for rotation 20%7 = 6 rotation

    int temp[d];

    // putting elements 1 2 3 before d into original array from temp array
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // shifting to the left 4 5 6 7 (3-3 = 0 index)
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    // Put back temp array starting from(n-d) = (7-3 = 4 index)
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)]; //  0 1 2
    }

    // Print the array in place of 5 6 7
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/*
TC : d+n-d+n = 2n = O(n)
SC : O(1) not using extra space

*/
void left_roatate_by_d_reversal_optimal(int arr[], int n, int d)
{
    reverse(arr, arr + d);     // O(d)
    reverse(arr + d, arr + n); // O(n-d)
    reverse(arr, arr + n);     // O(n)

    

    for (int i = 0; i < n; i++)
    {
        cout << arr << " ";
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
        int d;
        cin >> d;
        // left_rotate_array_by_d_brute(arr, n, d);
        // left_rotate_by_d(arr, n, d);
        left_roatate_by_d_reversal_optimal(arr, n, d);
    }
    return 0;
}
