#include <bits/stdc++.h>
using namespace std;

/*
TC : O(N^4)
SC :  O(2 * no. of the quadruplets) as using a set data structure and a list to store the quads.
*/
// vector<vector<int>> four_sum_brute(vector<int> arr)
// {
//     // AS elements are distinct so that am using set data str. to store distinct element
//     set<vector<int>> s;
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 for (int l = k + 1; k < n; k++)
//                 {
//                     if (arr[i] + arr[j] + arr[k] + arr[l] == 0)
//                     {
//                         // storing all the distinct ele in tempList vector
//                         vector<int> tempList = {arr[i], arr[j], arr[k], arr[l]};
//                         sort(tempList.begin(), tempList.end());
//                         // Now storing the tempList in set for distinct prop
//                         s.insert(tempList);
//                     }
//                 }
//             }
//         }
//     }
//     // As i have to return the ans in vector form so creating a vector of vector
//     vector<vector<int>> ans(s.begin(), s.end());
//     return ans;
// }

vector<vector<int>> four_sum_better(vector<int> &nums, int target)
{
    int n = nums.size();
    set<vector<int>> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<long long> hashset;
            for (int k = j + 1; j < n; k++)
            {
                long long sum = nums[i] + nums[j];
                sum = sum + nums[k];
                long long fourth = target - sum;
                if (hashset.find(fourth) != hashset.end())
                {
                    vector<int> tempList = {nums[i], nums[j], nums[k], (int)(fourth)};
                    sort(tempList.begin(), tempList.end());
                    s.insert(tempList);
                }
                hashset.insert(nums[k]);
            }
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
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        // vector<vector<int>> res = four_sum_brute(arr);

        //Better appr.
        int target;
        cin>>target;
        vector<vector<int>> res = four_sum_better(nums, target);
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