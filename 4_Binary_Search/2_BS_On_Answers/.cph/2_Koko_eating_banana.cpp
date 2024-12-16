#include <bits/stdc++.h>
using namespace std;

/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.
Example 1:

Input: piles = [3,6,7,11], h = 8
Output: 4
Example 2:

Input: piles = [30,11,23,4,20], h = 5
Output: 30
Example 3:

Input: piles = [30,11,23,4,20], h = 6
Output: 23
*/


/*
Brute Force appr:

Algo:
1. Firstly Find the maximum from the array by creating a separate function --> findMax(arr)
2. Calculate TotalHours to eating bananas by creating another function --> TotalHours(arr, int hourly)
3. Find minimum time to eat at the end 
*/

int findMax(vector<int> &arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;  // max  = 11
}

int calculateTotalHours(vector<int> &arr, int hourly)
{
    int n = arr.size();
    int totalH = 0;
    for(int i=0; i<n; i++)
    {
        totalH = totalH + ceil((double)(arr[i]) / (double)(hourly)); //
    }
    return totalH;
}

int minimumTimeToEat(vector<int> &arr, int h)
{
    int maxi = findMax(arr);
    for(int i=1; i<=maxi; i++)
    {
        int requireTime = calculateTotalHours(arr, i);
        if(requireTime <= h)
        {
            return i;
        }

    }
    return maxi;
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
        int h;
        cin >> h;

        cout << minimumTimeToEat(arr, h);
    }
    return 0;
}