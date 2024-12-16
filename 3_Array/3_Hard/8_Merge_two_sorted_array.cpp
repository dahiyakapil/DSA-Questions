#include <bits/stdc++.h>
using namespace std;

/*
TC :  O(n+m) + O(n+m), where n and m are the sizes of the given arrays.
Reason: O(n+m) is for copying the elements from arr1[] and arr2[] to arr3[]. And another O(n+m) is for filling back the two given arrays from arr3[].

SC : O(n+m) as we use an extra array of size n+m.

*/

void mergeSortedArray_brute(int arr1[], int arr2[], int n, int m)
{
    int arr3[n + m];
    int left = 0;
    int right = 0;
    int index = 0;

    while (left < n && right < m)
    {
        if (arr1[left] <= arr2[right])
        {
            arr3[index] = arr1[left];
            left++, index++;
        }
        else
        {
            arr3[index] = arr2[right];
            right++, index++;
        }
    }

    while (left < n)
    {
        arr3[index++] = arr1[left++];
    }
    while (left < m)
    {
        arr3[index++] = arr1[right++];
    }

    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
            arr1[i] = arr3[i];
        else
            arr2[i - n] = arr3[i]; // 4-4 = 0 index of second array
    }
}

/*

TC : O(min(n, m)) + O(n*logn) + O(m*logm), where n and m are the sizes of the given arrays.
Reason: O(min(n, m)) is for swapping the array elements. And O(n*logn) and O(m*logm) are for sorting the two arrays.

sc : O(1) as not using any extra space

*/
void mergeSortedArray_optimal(int arr1[], int arr2[], int n, int m)
{
    int left = n - 1; // last index of arr1
    int right = 0;    // starting index of arr2

    while (left >= 0 && right < m)
    {
        if (arr1[left] > arr2[right])
        {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else
        {
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        int m;
        cin >> m;
        int arr2[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        // mergeSortedArray_brute(arr1, arr2, n, m);
        mergeSortedArray_optimal(arr1, arr2, n, m);

        // Resultant array
        for (int i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }

        for (int i = 0; i < m; i++)
        {
            cout << arr2[i] << " ";
        }
    }

    return 0;
}