#include <bits/stdc++.h>
using namespace std;

/*
Floor of an array

It is the largest element of the array <=target

Algo

1. Create two pointers low=0, high=n-1
2. Create a variable ans = -1
3. Run a while lool inside loop
    create a variable mid to find the find of the low and high using the formula (low+high)/2
    if(arr[mid]<=target)
    and update the ans with mid and also find the element in the right half of the array as i have to find the largest element so go in the right half of the array
    low=mid+1
4. Else find in the left half of the array
    high=mid-1
5. Return ans


    int floor(arr,n,taregt)
    {
        low=0,high=n-1
        ans=-1
        while(low<=high)
        {
            mid=(low+high)/2
            if(arr[mid]<=target)
            ans=arr[mid]
            low=mid+1
            else
            high=mid-1
        }
        return ans
    }

    TC : O(Logn)
    SC : O(1)
*/

int floorOfArray(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] <= target)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}


/*

    TC : O(Logn)
    SC : O(1)
*/
int ceilOfArray(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= target)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
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
        int target;
        cin >> target;
        // cout << floorOfArray(arr, n, target);
        cout<<ceilOfArray(arr, n, target);
    }
    return 0;
}