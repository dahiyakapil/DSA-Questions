#include <bits/stdc++.h>
using namespace std;

/*
Search Single Element in a sorted array

------------------------------------------------------------------------
Problem Statement: Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array.

Example 1:
Input Format: arr[] = {1,1,2,2,3,3,4,5,5,6,6}
Result: 4
Explanation: Only the number 4 appears once in the array.

Example 2:

Input Format: arr[] = {1,1,3,5,5}
Result: 3
Explanation: Only the number 3 appears once in the array.
----------------------------------------------------------------------
*/

/*
---------------------------------------------------------------------------------------------------------------------
 Brute Force Appr.
 In this problem i have to check the single element so for that i have to check the precdence of the element. Means the element before and after are they equal or not if not then that element is single

 Algo ----->3 cases

 1. If there is single element in the array then simply return that element -------> if(n==1) return arr[0]
 2. Traverse the array
 3. During traversing--->
    --> 3 cases - i = 0, n-1, and both
    --> if(i == 0) then check for the next element of the array if they are not equal then return the element --> arr[i]!=arr[i+1]
    --> esle if(i == n-1) then check for the previous element of the array if they are not equal then return the element --> arr[i]!=arr[n-1]
    --> else arr[i]!=arr[i+1] && arr[i]!=arr[n-1]
4 Return -1 if does not found the element.

    int solve(arr, n)
    {
        if(n==1) return arr[0]

        for(i=0 - n)
        {
            if(i==0)
                if(arr[i] != arr[i+1])
                return arr[i]

            else if(i==n-1)
                if(arr[i]!=arr[n-1])
                return arr[i]

            else
                if(arr[i]!=arr[i+1] && arr[i]!=arr[n-1])
                return arr[i]

        }
    }


--------------------------------------------------------------------------------------------------------------------
*/

int searchElement_brute(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return arr[0];

    for (int i = 0; i < n; i++)
    {

        if (i == 0)
        {
            if (arr[i] != arr[i + 1])
                return arr[i];
        }
        else if (i == n - 1)
        {
            if (arr[i] != arr[i - 1])
                return arr[i];
        }
        else
        {
            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
                return arr[i];
        }
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << searchElement_brute(arr);
    }
    return 0;
}