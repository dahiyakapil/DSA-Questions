#include <bits/stdc++.h>
using namespace std;

/*
Minimum in Rotated Sorted Array
Problem Statement: Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. Find the minimum element in the array.

------------------------------------------------------

Input Format: arr = [4,5,6,7,0,1,2,3]
Result: 0
Explanation: Here, the element 0 is the minimum element in the array.

Example 2:
Input Format: arr = [3,4,5,1,2]
Result: 1
Explanation: Here, the element 1 is the minimum element in the array.

-----------------------------------------------------------
*/

/*  
Brute Force using linear search

Algo
1. Create a mini var. and initialize it with the max value of the computer -------> mini=INT_MAX
2. Traverse the array
3. In traversing if the element in an array is found to be minimum then update the mini var. and store in the mini var.
4. Return mini as a output

    int solve(arr,n)
    {
        mini=INT_MAX
        for(i=0 - n)
        {
            if(arr[i]<mini)
            mini=min(mini, arr[i])
        }
        return mini
    }

    TC : O(n)
    SC : O(1)

*/

int minimumEleInRotatedSortedArray_brute(vector<int> &arr)
{
    int n = arr.size();
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = min(mini, arr[i]);
        }
    }
    return mini;
}

/*
Optimal Approach. Using Binary Search

Algo
1. Create 2 pointers ------>low=0, high=n-1
2. Create a var ans to store the maximum value and use this value to compare it with the elements of the array--------->ans = INT_MAX
3. Run a while loop and create a mid to store the mid of the array ----------> mid = (low+high)/2
4. Inside while loop
    2 cases
    -->if left half is sorted and eliminate the
        if(arr[low]<=arr[mid])
        find in the left half of the array
        update the ans with minimum of the ans and arr[low] --------> ans=min(ans, arr[low])
        low = mid+1
    -->if right half is sorted
        find in right half of the array
        update the ans with minimum of the ans and arr[mid] --------> ans=min(ans, arr[mid])
        high = mid-1
5. return ans
*/

int minimumEleInSortedArray_optimal(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else
        {
            ans = min(ans, arr[mid]);
            high = mid - 1;
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
        cout << minimumEleInRotatedSortedArray_brute(arr);
        cout << endl;
        cout << minimumEleInSortedArray_optimal(arr);
    }
    return 0;
}