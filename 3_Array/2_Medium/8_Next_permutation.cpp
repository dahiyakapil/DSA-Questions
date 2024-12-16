#include <bits/stdc++.h>
using namespace std;

/*
TC :
SC :
*/

// For moving the pointer and generation of permutations
void generatePermutation(int index, vector<int> &arr, vector<vector<int>> &ans)
{
    int n = arr.size();
    if (index == n) // if pointer at the last end
    {
        ans.push_back(arr); // Pushing ele into ans array from original array
        return;
    }
    for (int i = index; i < n; i++) // Change i = 0 to i = index
    {
        swap(arr[index], arr[i]);                 // indexing swapping with the elements - 0 0, 0 1, 0 3
        generatePermutation(index + 1, arr, ans); // Increase pointer (index)
        swap(arr[index], arr[i]);                 // Backtrack
    }
}

vector<vector<int>> resPermutation(vector<int> &arr)
{
    vector<vector<int>> ans;
    generatePermutation(0, arr, ans);
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

        vector<vector<int>> result = resPermutation(arr);
        for (auto &perm : result)
        {
            for (auto it : perm)
            {
                cout << it << " ";
            }
            cout << endl;
        }

        cout << endl;
    }
    return 0;
}
