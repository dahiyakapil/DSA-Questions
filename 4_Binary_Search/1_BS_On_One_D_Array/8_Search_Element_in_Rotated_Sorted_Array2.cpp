#include <bits/stdc++.h>
using namespace std;

/*

Search Element in Rotated Sorted Array II

Problem Statement: Given an integer array arr of size N, sorted in ascending order (may contain duplicate values) and a target value k. Now the array is rotated at some pivot point unknown to you. Return True if k is present and otherwise, return False.
-------------------------------------------------------------------------
Input Format: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 3
Result: True
Explanation: The element 3 is present in the array. So, the answer is True.

-------------------------------------------------------------------------


Brute Force Appr.
using linear Search

Algo
1. Traverse the array
2. Check if the element in an array is equal to the target element then return true
3. If not found then return false

*/

bool searchElement_brute(vector<int> &arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

/*
Optimal Appr.
Using binary Search

Algo
1. Create two pointers low=0, high=n-1
2. run a while loop calculate mid usig (low+high)/2
3. Inside while loop
    4 case
    --> if mid == target then return True
    --> check if arr[mid]==arr[low]==arr[high]
        *if yes then increment low and drecrement high ---- low = mid+1, high = mid-1
    -->check for left and right half
        if(arr[low] <= arr[mid])
            if(arr[low]<=target && target<=arr[mid])
            then eleminate right half
            high = mid-1
            else
            low=mid+1
    -->Check for right half
         if(Arr[mid] <= arr[high])
            if(arr[mid]<=target && taregt<=high)
            then eleminate the left half
            low = mid+1
            else
            high = mid-1
4 Once mid points to the target then return True
5 Otherwise Return false if not element not    found in the array



*/

bool searchElement_optimal(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return true;
        }

        // Important condition as mid points to the targe
        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low = mid + 1;
            high = mid - 1;
        }

        // Left half of sorted array
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else //right half of the array
        {
            if (arr[mid] <= target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
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
        cout << searchElement_brute(arr, target);
        cout<<endl;
        cout << searchElement_optimal(arr, target);
    }
    return 0;
}