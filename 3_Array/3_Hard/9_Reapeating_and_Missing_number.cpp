#include <bits/stdc++.h>
using namespace std;

vector<int> findMissing_ReapeatingNumber_brute(vector<int> &arr)
{
    int n = arr.size();
    int repating = -1, missing = -1;
    for (int i = 1; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[j] == i)
                count++;
        if (count == 2)
            repating = i;
        else if (count == 0)
            missing = i;
        if (repating != -1 && missing != -1)
            break;
    }

    return {repating, missing};
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

        vector<int> ans = findMissing_ReapeatingNumber_brute(arr);
        cout << "The repeating and missing numbers are: {"
             << ans[0] << ", " << ans[1] << "}\n";
    }

    return 0;
}