#include <bits/stdc++.h>
using namespace std;

/*
Lower Bound
It is used to get the smallest index from the array

USing linaer search and bINary search can get the output

Algo
Using linear Search

1. Traverse the array and find the index
2 If element in an array greater than the element given then return the index

    for(i=0 - n)
    {
    if(arr[i] >= x)
    return i
    }
    return n
*/

// int lowerBonund_linearSearch(vector<int> &arr, int target)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i ++)
//     {
//         if (arr[i] >= target)
//             return i;
//     }
//     return n;
// }

int lowerBonund_BinarySearch(vector<int> &arr, int n, int target)
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

/*
Upper Bound
It return the index greater then the target element i.e. arr[i] > target element

Algo Brute Force Appr
1. Traverse the array
2. Find if the element in array greater then target the return the index
3. If does not find the element in an array then simply return the size of the array

TC : O(N)
SC : O(1)
*/

int upperBound_BinarySearch_Brute(vector<int> &arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > target)
        {
            return i;
        }
    }
    return n;
}
/*
Upper Bound
It return the index greater then the target element i.e. arr[i] > target element

Algo Optimal Appr.
1. create 3 variable low=0, high=n-1, ans=n
2. Run a while loop in which low<=high means till low reaches the high
3. Find mid of the low and high using the formula (low+high)/2
4. If arr[mid] > target element then update the ans with the mid and search in left half og the array (high = mid-1)
5. Else low = mid-1
6. Return the ans


    int low=0
    int high=n-1
    int ans=n
    while(low<=high)
    {
        int mid=(low+high) / 2
        if(arr[mid]>target)
        ans=mid
        high=mid-1
        else
        low=mid+1
    }
    return ans

    TC : O(Logn)
    SC : O(1)

*/

int upperBound_BinarySearch_Optimal(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > target)
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

        // cout << lowerBonund_linearSearch(arr, target);
        // cout << lowerBonund_BinarySearch(arr, n, target);
        // cout << upperBound_BinarySearch_Brute(arr, n, target);
        cout << upperBound_BinarySearch_Optimal(arr, n, target);
    }
    return 0;
}