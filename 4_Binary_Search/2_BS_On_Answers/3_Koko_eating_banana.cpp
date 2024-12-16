#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &arr, int hourly)
{
    int n = arr.size();
    int totalH = 0;
    for (int i = 0; i < n; i++)
    {
        totalH += ceil((double)((arr[i])) / (double)(hourly));
    }
    return totalH;
}

int minimumRateToEatBanana(vector<int> &arr, int h)
{
    int low=1, high=findMax(arr);
    while(low<=high)
    {
        int mid= (low+high) / 2;
        int totalH = calculateTotalHours(arr, mid);
        if(totalH<=h)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return low;
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


        // cout << findMax(arr);
        int h;
        cin >> h;
        cout << minimumRateToEatBanana(arr, h);
    }
    return 0;
}







