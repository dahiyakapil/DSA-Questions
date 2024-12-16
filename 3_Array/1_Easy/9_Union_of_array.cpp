#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray_set(int arr1[], int arr2[], int n, int m)
{

    set<int> s;
    vector<int> union_array;

    // Putting arr1 elements in set as set store only unique elements
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }

    // Putting all the elements of set in vector
    for (auto it : s)
    {
        union_array.push_back(it);
    }

    return union_array;
}

vector<int> Union_Array_two_pointer(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;  // pointers
    vector<int> Union; // Uninon vector
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j]) // Case 1 and 2
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else // case 3
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n) // IF any element left in arr1
    {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < m) // If any elements left in arr2
    {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        int m;
        cin >> m;
        int arr2[n];
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        // vector<int> ans = unionArray_set(arr1, arr2, n, m);
        vector<int> ans = Union_Array_two_pointer(arr1, arr2, n, m);
        for (auto &val : ans)
        {
            cout << val << " ";
        }
    }

    return 0;
}