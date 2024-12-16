#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> three_sum_brute(vector<int> &arr)
{
    int n = arr.size();
    set<vector<int>> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; j < n; j++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> tempList = {arr[i] + arr[j] + arr[k]};
                    sort(tempList.begin(), tempList.end());
                    s.insert(tempList);
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());
    return ans;
}


/*
TC :  O(N2 * log(no. of unique triplets))
SC :  O(2 * no. of the unique triplets) + O(N) 
*/
vector<vector<int>> three_sum_better(vector<int> &arr)
{
    int n = arr.size();
    set<vector<int>> s;
    for (int i = 0; i < n; i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < n; j++)
        {
            int third = -(arr[i] + arr[j]);
            if (hashset.find(third) != hashset.end())
            {
                vector<int> tempList = {arr[i], arr[j], third};
                sort(tempList.begin(), tempList.end());
                s.insert(tempList);
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());
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
        vector<vector<int>> res = three_sum_better(arr);
        for (auto it : res)
        {
            for (auto ele : it)
            {
                cout << ele << " ";
            }
        }
    }

    return 0;
}