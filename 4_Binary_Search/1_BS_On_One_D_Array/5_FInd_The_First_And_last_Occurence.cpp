#include <bits/stdc++.h>
using namespace std;

/*
Last occurrence in a sorted array

Brute Force Appr. Using Linear Search


Algo
1. Create a res variable and initialize it with -1 ----------->  res=-1
2. Traverse the array from the end
3. Check if the element present in the array if element present in the array then return the index ---------> if(arr[i] == key)
4. Update the res with index -------> res = i
5. Return res


    int solve(arr,n, key)
    {
        res=-1
        for(i=n-1 - 0)
        if(arr[i]==key)
        {
            res =i;
        break;
        }
        return res;
    }


*/

int lastOccurence_Brute(vector<int> &arr, int n, int key)
{
    int res = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == key)
        {

            res = i;
            break;
        }
    }
    return res;
}

/*
last Occurence in the sorted array

Using Binary Search
Algo
1. Create 2 pointers low=0, high=n-1
2. Create a variable res and initialize it with -1 -------> res=-1
3. Run a while loop untill the low pomiter cross over the high pointer inside while loop
    -> 3 cases
    |   mid ==      |    <          |    >        |
    |               |               |             |
       ans=mid
       low=mid+1        high=mid-1     low=mid+1

4. Return ans.



    int solve(arr,n,key)
    {
        low=0, high=n-1
        ans=-1
        while(low<=high)
        {
            mid=(low+high)/2
            if(arr[mid]==key)
            ans=mid
            low=mid+1
            else if(arr[mid]<key)
            high=mmid-1
            else
            low=mid+1
        }
        return ans
    }
*/

int lastOccurence_Optimal(vector<int> &arr, int n, int key)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int firstOccurence_Optimal(vector<int> &arr, int key)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

pair<int, int> first_And_last_occurence(vector<int> &arr, int n, int key)
{
    int first = firstOccurence_Optimal(arr, key);
    if (first == -1)
        return {-1, -1};
    int last = lastOccurence_Optimal(arr, n, key);
    return {first, last};
}

int countOcc(vector<int> &arr, int n, int key)
{
    pair<int, int> ans = first_And_last_occurence(arr, n, key);
    if(ans.first == -1)
    return 0;
    return (ans.second-ans.first + 1);
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
        int key;
        cin >> key;
        // cout << lastOccurence_Brute(arr, n, key);
        // cout << lastOccurence_Optimal(arr, n, key);
        // cout << firstOccurence_Optimal(arr, key);
        pair<int, int> ans = first_And_last_occurence(arr,n,key);
        cout<<ans.first<<" "<<ans.second;
        cout<<endl;
        int res = countOcc(arr, n, key);
        cout<<res;

    }
    return 0;
}
