#include <bits/stdc++.h>
using namespace std;

/*
Brute Force

for the function possible(arr, day,m,k)

1. Create a function possible to count the number of bouquets -> bool possible(arr, day, m, k)
2. Create a var cnt to count the number of adjacent flowers
3. Create another var noOfBouquets to calculate the number of bouquets
4. Run a for loop -->
     inside for loop
     if(arr[i] <= day) -->cnt++
     else noOfBouquets = noOfBouquets + (cnt / k)
     cnt = 0
5. Again check and noOfBouquets+ = (cnt/k)
6 Return noOfBouquets >= m

For the output function : roseGarden(arr,k,m)

1. Create a var val = 1ll*k*1ll : 1ll for integer flow
2. if(val < n)
   return -1 --> impossible  case
3. Find minimum and maximum --> mini, maxi
4. Run a for loop
   inside for loop
       if(possible(arr,i,m,k))
       return i;
5. If nothing happened return -1

*/

bool possible(vector<int> &arr, int day, int m, int k)
{
    int n = arr.size(); // size of the array
    int cnt = 0;
    int noOfB = 0;
    // count the number of bouquets:
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= day)
        {
            cnt++;
        }
        else
        {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
}

// int roseGarden(vector<int> &arr, int m, int k)
// {
//     int n = arr.size();
//     int val = 1ll * m * 1ll;
//     if (val < n)
//         return -1;
//     int mini = INT_MAX;
//     int maxi = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         mini = min(mini, arr[i]);
//         maxi = max(maxi, arr[i]);
//     }

//     for (int i = mini; i <= maxi; i++)
//     {
//         if (possible(arr, i, m, k))
//             return i;
//     }
//     return -1;
// }

/*
Optimal Approach

*/

int roseGarden(vector<int> arr, int k, int m) {
    long long val = m * 1ll * k * 1ll;
    int n = arr.size(); //size of the array
    if (val > n) return -1; //impossible case.
    //find maximum and minimum:
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    //apply binary search:
    int low = mini, high = maxi;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (possible(arr, mid, m, k)) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return low;
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
        int k, m;
        cin >> k >> m;
        int ans = roseGarden(arr, k, m);
        if (ans == -1)
            cout << "We cannot make m bouquets.\n";
        else
            cout << "We can make bouquets on day " << ans << "\n";
    }
    return 0;
}