#include <bits/stdc++.h>
using namespace std;

/*
Example 1:
Input Format: arr[] = {1,1,2,2,3,3,4,5,5,6,6}
Result: 4
Explanation: Only the number 4 appears once in the array.

Example 2:

Input Format: arr[] = {1,1,3,5,5}
Result: 3
Explanation: Only the number 3 appears once in the array.
*/

/*
    Brute Force Approach

    Algo
    There are 4 cases
    1. Check if there is single element in an array then return that element -----> if(n==1)
    2. Traverse the array and check for the conditions -
    .check for first element,if first element is not equal to the next element then return element of array --> if(arr[i] == arr[i+1]) return arr[i]
    . else if check for the last element, if last ele not equals to the preceding ele then return ele of array --> else if(arr[i] == arr[i-1])
    . else check for the rest ele or check for both first and last -->if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1])
    3. If not found any single element then return -1.


        TC : O(N) --> N(size of array)
        SC : O(1)

*/

int singleELement_Brute(vector<int> &arr)
{
    int n = arr.size();
    // If there is single element in array
    if (n == 1)
        return arr[0];

    for (int i = 0; i < n; i++)
    {
        // Check for first index
        if (i == 0)
        {
            if (arr[i] != arr[i + 1])
                return arr[i];
        }
        // Check for the last ele
        else if (i == n - 1)
        {
            if (arr[i] != arr[i - 1])
                return arr[i];
        }
        else
        { // check for the rest ele or check for the both cond.
            if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
                return arr[i];
        }
    }
    // If not found any ele
    return -1;
}

/*
    Second Brute force using XOR
    properties of xor -->
        a ^ a = 0, XOR of two same numbers results in 0.
        a ^ 0 = a, XOR of a number with 0 always results in that number.

    Algo
    1. Declare a var ans = 0
    2. Traverse the array 
        .check xor for every element with ans var.
    3. The ans will store the single ele.

*/

int singleElement_SecondBrute_UsingXOR(vector<int> &arr)
{
    int n = arr.size();
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        ans = ans ^ arr[i];
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
        // cout << singleELement_Brute(arr)<<" ";
        cout << singleElement_SecondBrute_UsingXOR(arr)<<" ";

    }
    return 0;
}