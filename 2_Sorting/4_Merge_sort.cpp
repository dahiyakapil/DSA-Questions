
/*

#include <bits/stdc++.h>
using namespace std;


//TC: O(N*Log2N)

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]); //// Pushing those elements which are still left half
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]); // Pushing those elements which are still left in right half
        right++;
    }

    // Transferring the temp arr elements into original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low]; // low-low =0 ,  low+1-low =1, low+2-low=2
    }
}

void mergeSort(int arr[], int low, int high) // Recursion and backtracking
{
    if (low >= high)
    { // if last element is left only single in both the arrays left and right half
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid); // Passing indexing
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i <= n; i++)
        {
            cin >> arr[i];
        }
    }

    return 0;
}

*/



