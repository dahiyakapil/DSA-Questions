#include <bits/stdc++.h>
using namespace std;

/*
BInary Search
 it is an algorithm used to search an element in an array or in vector.

 Algo
 1. Create 2 variales low=0 and high=n-1
 2. Run a while loop until low < high inside loop
    -> create a varibale mid to calculate the middle of the array
    -> There will be 3 cases
        if mid == target
            return mid
        if target in the left side then right will be mid-1
        if target in the right side then left will be mid+1

        if target does not found then left and right pointers will cross each other

3 Return -1 if does not found


int low = 0
int right = n-1
while(low<high)
{
    if(target==arr[mid])
    retunr mid
    else if(target>mid)
    low=mid+1
    else'
    high=mid-1

}
retunr -1

TC : O(Log n)
SC : O(1)


*/

int binary_search_brute_iterative(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (target == arr[mid])
            return mid;
        else if (target > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int binary_search_recursive(vector<int> &arr, int low, int high, int target)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (target == arr[mid])
        return mid;
    else if (target > mid)
        return binary_search_recursive(arr, mid + 1, high, target);
    return binary_search_recursive(arr, low, mid - 1, target);
}

int search_element(vector<int> &arr, int target)
{
    return binary_search_recursive(arr, 0, arr.size() - 1, target);
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
        // This will return an index
        cout << search_element(arr, target);
        
    }

    return 0;
}