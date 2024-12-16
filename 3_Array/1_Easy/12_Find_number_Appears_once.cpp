#include <bits/stdc++.h>
using namespace std;

/*

Intution
Using linear search we can find that number easily and declare a ccounterr varibale that will count the frequency of that number and if the counter value is equal to 1 then that will be the number that appears once

*/

int appears_once_brute(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                count++;
            }
        }

        if (count == 1)
        {
            return num;
        }
    }

    return -1;
}

/*
Better Approach using hash or map

Array hashing(not applicable if the array contains negatives or very large numbers)
*/
int apears_once_hash_better(vector<int> &arr, int n)
{
    n = arr.size();
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    vector<int> hash(maxi + 1, 0);
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] == 1)
            return arr[i];
    }

    return -1;
}

// Better approach2 using map

int appears_once_map_better(int arr[], int n)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second == 1)
        {                    // frequency
            return it.first; // value
        }
    }

    return -1;
}

/*
TC: O(N)
SC: O(1)
*/
int appears_once_xor_optimal(int arr[], int n)
{
    int xorr = 0;
    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ arr[i]; // 1 ^ 1 = 0 0^2=2
    }

    return xorr;
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

        // cout << appears_once_brute(arr, n);
        // int ans = apears_once_better(arr, n);
        // cout<<ans<<endl;
        //  cout<<appears_once_map_better;

        cout << appears_once_xor_optimal << endl;
    }

    return 0;
}
