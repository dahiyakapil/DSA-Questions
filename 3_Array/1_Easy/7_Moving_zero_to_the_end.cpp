#include <bits/stdc++.h>
using namespace std;

vector<int> move_zeroes_brute(vector<int> arr, int n)
{
    vector<int> temp;

    // putting non zeroes from original array to temp array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    // Putting non zeroes from temp to origianl array
    int nz = temp.size();
    for (int i = 0; i < nz; i++)
    {
        arr[i] = temp[i];
    }

    // Putting rest zeroes to the end
    for (int i = nz; i < n; i++)
    {
        arr[i] = 0;
    }

    return arr;
}

vector<int> move_zeroes_optimal(vector<int> arr, int n)
{
    // using two pointers
    int j = -1;

    // Search for first zero in array using j pointer
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // if there are no non zero elemnts
    if (j == -1)
    {
        return arr;
    }

    // Move pointers i and j and swap acc. with zeroes and nz
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            // swap(arr[i], arr[j]);
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    return arr;
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

        // vector<int> ans = move_zeroes_brute(arr, n);
        vector<int> ans = move_zeroes_optimal(arr, n);
        for (auto &it : ans)
        {
            cout << it << " ";
        }
    }
    return 0;
}
