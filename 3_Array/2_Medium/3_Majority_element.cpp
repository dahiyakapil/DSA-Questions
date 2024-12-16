#include <bits/stdc++.h>
using namespace std;

int majority_element_using_count_brute(vector<int> &arr, int n)
{
    n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > (n / 2))
        {
            return arr[i];
        }
    }
    return -1;
}
int majorityElement_bettter(vector<int> v)
{

    // size of the given array:
    int n = v.size();

    // declaring a map:
    map<int, int> mpp;

    // storing the elements with its occurnce:
    for (int i = 0; i < n; i++)
    {
        mpp[v[i]]++;
    }

    // searching for the majority element:
    for (auto it : mpp)
    {
        if (it.second > (n / 2))
        {
            return it.first;
        }
    }

    return -1;
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
        // cout<<majority_element_using_count_brute(arr, n);
        int ans = majorityElement_bettter(arr);
        cout << ans;
    } 

    return 0;
}