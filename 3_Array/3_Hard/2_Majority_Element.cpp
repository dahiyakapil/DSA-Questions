#include <bits/stdc++.h>
using namespace std;

/*
TC: O(N^2)
SC: O(1)

*/

vector<int> majorityElements_brute(vector<int> vec)
{
    int n = vec.size();
    vector<int> tempList;

    for (int i = 0; i < n; i++)
    {

        if (tempList.empty() || tempList[0] != vec[i])
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (vec[j] == vec[i])
                {
                    count++;
                }
            }
            if (count > (n / 3))
            {
                tempList.push_back(vec[i]);
            }
        }
        if (tempList.size() == 2)
            break;
    }
    return tempList;
}

vector<int> majorityElement_better(vector<int> vec)
{
    int n = vec.size();
    vector<int> tempList;
    map<int, int> mpp;
    int mini = int(n / 3) + 1;

    for (int i = 0; i < n; i++)
    {
        mpp[vec[i]]++;
        if (mpp[vec[i]]++ == mini)
            tempList.push_back(vec[i]);
        if (tempList.size() == 2)
            break;
    }

    return tempList;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        // vector<int> ans = majorityElements_brute(vec);
        vector<int> ans = majorityElement_better(vec);
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
