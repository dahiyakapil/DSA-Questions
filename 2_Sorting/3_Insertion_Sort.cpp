#include <bits/stdc++.h>
using namespace std;

/*


*/

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <=n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
            cout<<"Runs\n";
        }
    }

    for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
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
        insertion_sort(arr,n);
    }

    return 0;
}