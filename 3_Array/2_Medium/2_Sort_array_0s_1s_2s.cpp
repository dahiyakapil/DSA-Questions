#include <bits/stdc++.h>
using namespace std;

void sortArray_using_count_better(vector<int> &arr, int n) // Pass by reference
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0; // Initialize counts to 0
    n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }

    for (int i = 0; i < cnt0; i++)
    {
        arr[i] = 0;
    }

    for (int i = cnt0; i < cnt0 + cnt1; i++)
    {
        arr[i] = 1;
    }

    for (int i = cnt0 + cnt1; i < n; i++)
    {
        arr[i] = 2;
    }
}

void sortArray_using_dutch_naitional_flag_algo(vector<int> &arr, int n)
{
    n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0){


            swap(arr[low], arr[mid]);
        low++;
        mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
                high--;
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
        vector<int> arr(n); // Resize the vector to hold n elements
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // sortArray_using_count_better(arr, n);
        sortArray_using_dutch_naitional_flag_algo(arr,n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl; // Add a new line after printing the array
    }

    return 0;
}
