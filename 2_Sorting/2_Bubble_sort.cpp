/*

#include <bits/stdc++.h>
using namespace std;


//TC : O(N^2) Worst Case

//Optimization in bublle sort
//if array is sorted already then no need to swap the adjcent elements as they are already sorted so
//Now TC : O(N) cause no swap needed.




void bubble_sort(int arr[], int n)
{

        for (int i = n - 1; i >= 0; i--)
        {
            int didswap=0; //For optimation
            for (int j = 0; j <= i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                    didswap=1;
                }
            }
            if(didswap==0){
                break;
            }
            cout<<"Runs\n";
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

        bubble_sort(arr, n);
    }

    return 0;
}


*/

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
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

        bubble_sort(arr, n);
    }

    return 0;
}
