#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(N^2)
Space Complexity: O(1)
*/
bool check_array_sorted_brute(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
                return false;
    }

    return true;
}

/*
Time Complexity: O(N)
Space Complexity: O(1)
*/
bool check_array_sorted_opt(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1]) //  2 > 1 and 3 > 2 
        {
        }
        else
        {
            return false;
        }
    }

    return true;
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
        cout << check_array_sorted_opt(arr, n);
        cout<<endl;
        cout << check_array_sorted_brute(arr, n);
    }
    return 0;
}