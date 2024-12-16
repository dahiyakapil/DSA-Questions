#include <bits/stdc++.h>
using namespace std;

/*

*/

int remove_dup_brute(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]); // it will insert only unique element
    }

    // Fetching the element from set
    int store_element = s.size();
    int index = 0;
    for (auto it : s)
    {
        arr[index++] = it;
    }

    return store_element;
}

/*
Time Complexity: O(N)
Space Complexity: O(1)
*/
int remove_duplicates_optimal(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
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

        int k = remove_dup_brute(arr, n);

        // int k = remove_duplicates_optimal(arr, n);
        // // int store_element =  remove_dup_brute(arr, n);

        for (int i = 0; i < k; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}





// ******************************************** Practise ***********************************************************



// #include <bits/stdc++.h>
// using namespace std;

// int remove_dup_brute(int arr[], int n)
// {
//     set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(arr[i]);
//     }

//     int index = 0;
//     for (auto it : s)
//     {
//         arr[index] = it;
//         index++;
//     }

//     return index;
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

//         int k = remove_dup_brute(arr, n);
//         for (int i = 0; i < k; i++)
//         {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }
