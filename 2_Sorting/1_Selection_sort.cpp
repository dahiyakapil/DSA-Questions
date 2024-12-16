/*

include <bits/stdc++.h>
using namespace std;

// Select minimum and then swap
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;                   // miinimum ele at 0th index
        for (int j = i + 1; j < n; j++) // inner loop starts from 1 to n
        {
            if (arr[j] < arr[mini]) // it will check arr[1] < arr[mini]  (5<5) (5<4)
            {
                mini = j;
            }
        }
        int temp = arr[mini]; //
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        selection_sort(arr,n);
    }

    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        selection_sort(arr, n);
    }

    return 0;
}