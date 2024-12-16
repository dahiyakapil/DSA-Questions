
#include <bits/stdc++.h>
using namespace std;

/*
Brute force Approach
it works only if there are no duplicates in array

Intution:
Simple we will sort the array and the first element woule be =  smallest
last elemnent would be = largest
and before last (n-1) woul be = second largest

Approach:
-> sort the array in ascending order
-> first element would be smallest and next to it would be second smallest
-> Last element woul be largest and eofre last(n-1) would be second largest

Time Complexity: O(NlogN), For sorting the array

Space Complexity: O(1)
*/

void secondLargest_brute(int arr[], int n)
{

    if (n == 0 || n == 1)
    {
        cout << -1 << " " << -1 << endl; // if single element present in an array
    }
    sort(arr, arr + n);
    int smallest = arr[0];
    int secondsmallest = arr[1];
    int largest = arr[n - 1];
    int secondlargest = arr[n - 2];
    cout << smallest << endl;
    cout << secondsmallest << endl;
    cout << largest << endl;
    cout << secondlargest << endl;
}

void betterapproach_better(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int large = INT_MIN;
    int second_large = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
        if (arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }

    cout << second_small << endl;
    cout << second_large << endl;
}

int optiamal_solutin_second_large(int arr[], int n)
{
    if (n < 2)
    {
        return -1;
    }
    int large = INT_MIN;
    int second_Large = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            second_Large = large;
            large = arr[i];
        }
        else if (arr[i] > second_Large && arr[i] != large)
        {
            second_Large = arr[i];
        }
    }
        return second_Large;
}


int optiamal_solutin_second_small(int arr[], int n)
{
    if (n < 2)
    {
        return -1;
    }
    int small = INT_MAX;
    int second_small = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
    }
    return second_small;
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
        // secondLargest(arr, n);
        // betterapproach(arr, n);
        cout<<optiamal_solutin_second_large(arr, n);
        cout << endl;
        cout << optiamal_solutin_second_small(arr, n);
    }
    return 0;
}

//   *******************************************                       Practise                  ************************************************

// #include <bits/stdc++.h>
// using namespace std;

// void secondlarge(int arr[], int n)
// {
//     if (n == 0 || n == 1)
//     {
//         cout << -1 << " " << -1;
//     }
//     sort(arr, arr + n);
//     int large = arr[n - 1];
//     int small = arr[0];
//     int flarge = arr[n - 2];
//     int secsmall = arr[1];
//     cout << small << endl;
//     cout << secsmall << endl;
//     cout << flarge << endl;
//     cout << large << endl;
// }

// void secondlargest_better(int arr[], int n){
//     int small = INT_MAX;
//     int secondsmall = INT_MAX;
//     int large = INT_MIN;
//     int secondlarge = INT_MIN;

//     for(int i=0; i<n; i++){
//         small = min(small, arr[i]);
//         large = max(large, arr[i]);
//     }

//     for(int i=0; i<n; i++){
//         if(arr[i]<secondsmall && arr[i]!=small) //
//         secondsmall = arr[i];
//         if(arr[i]>secondlarge&& arr[i]!=large) //
//         secondlarge = arr[i];
//     }

//     cout << secondsmall << endl;
//     cout << secondlarge;

// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         // secondlarge(arr, n);
//         secondlargest_better(arr,n);
//     }
//     return 0;
// }
