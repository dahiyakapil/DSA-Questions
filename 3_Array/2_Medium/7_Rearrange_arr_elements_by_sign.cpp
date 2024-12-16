#include <bits/stdc++.h>
using namespace std;


/*
TC : O(N+N/2)
SC : O(N)
*/
vector<int> rearrangeSign_brute(vector<int> arr)
{
    int n = arr.size();

    // Segregation of pos and neg
    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
        else
        {
            pos.push_back(arr[i]);
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }

    return arr;
}

/*
TC : O(N)
SC : O(N) for rearranging the elements into new vector arr
*/
vector<int> rearrangeSign_optimal(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans(n, 0);
    int posIndex = 0;
    int negIndex = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = arr[i];
            posIndex += 2;
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

        // vector<int> ans = rearrangeSign_brute(arr);
        vector<int> ans = rearrangeSign_optimal(arr);
        for (auto it : ans)
        {
            cout << it << " ";
        }
    }

    return 0;
}