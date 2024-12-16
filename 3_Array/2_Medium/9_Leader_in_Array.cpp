#include <bits/stdc++.h>
using namespace std;

vector<int> ledaerInArray_optimal(int arr[], int n)
{
    vector<int> ans;

    int max = arr[n - 1];
    ans.push_back(arr[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < max)
        {
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }
    return ans;
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

        vector<int> ans = ledaerInArray_optimal(arr, n);

        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }

        cout << "\n"; // Add this newline character
    }

    return 0;
}
