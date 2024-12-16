#include <bits/stdc++.h>
using namespace std;

/*
Count Occurrences in Sorted Array

Input: N = 7,  X = 3 , array[] = {2, 2 , 3 , 3 , 3 , 3 , 4}
Output: 4
Explanation: 3 is occurring 4 times in
the given array so it is our answer.
---------------------------------------------------------------------------------------------------------------------------

Brute Force Appr. using linear search

Algo

1. Create a fun and pass the array, n=size of the array, and the key ---------> f(arr, n, key)
2. Traverse the array
3. Create a count var. and initialize it with 0 to count the ocurrence of the var. -------> count=0
4. If the ele present in the array then update the count ------> if(arr[i] == key)
5. Return the count ------> return key

    int solve(arr, n, key)
    count=0
    for(i=0 - n)
    if(arr[i] == key)
    {
    count++
    }
    return count

    TC : O(n)
    SC : O(1)

*/

int count_occurence_in_sorted_Array_brute(vector<int> &arr, int n, int key)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    return count;
}

/*
Optimal Approach





*/

int firstOccurence_optimal(vector<int> &arr, int n, int key)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1; // Always search for small occurence as small ele are in left half
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurence_optimal(vector<int> &arr, int n, int key)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

pair<int, int> first_And_Last_Occurence(vector<int> &arr, int n, int key)
{
    int first = firstOccurence_optimal(arr, n, key);
    if (first == -1)
        return {-1, -1};
    int last = lastOccurence_optimal(arr, n, key);
    return {first, last};
}

int countOccrence(vector<int> &arr, int n, int key)
{
    pair<int, int> ans = first_And_Last_Occurence(arr, n, key);
    if (ans.first == -1)
        return 0;
    return (ans.second - ans.first + 1);
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
        int key;
        cin >> key;
        cout << count_occurence_in_sorted_Array_brute(arr, n, key) << endl;
        cout << firstOccurence_optimal(arr, n, key) << endl;
        cout << lastOccurence_optimal(arr, n, key) << endl;
        pair<int, int> ans = first_And_Last_Occurence(arr, n, key);
        cout << ans.first << " " << ans.second << endl;
        cout << countOccrence(arr, n, key);
    }
    return 0;
}