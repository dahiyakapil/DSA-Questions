#include <bits/stdc++.h>
using namespace std;

/*
Brute force Algo
1. Use 3 loops to generate all the subarrays
2. Create a variable prod to store the subarray
3. Create a maximum varible to store the maximum product
4. Return the maximum product

    maxi = INt_MIN
    for(i=0 - n)
    for(j=i - n)
    prod=1
    for(k=i - n)
    prod=prod*arr[k]
    maxi = max(maxi, prod)in
    return maxi

    TC: O(N^3)
    SC : O(1)
*/
int maximum_subarray_product_brute(vector<int> &arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            int prod = 1;
            for (int k = i; k <= j; k++)
                prod = prod * arr[k];
            maxi = max(maxi, prod);
        }
    }
    return maxi;
}

/*
Better Algo
1. Optimising the burte force by using the 2 nested loops
2. Run 2 loops
3. Create a variable prod to store the subarray
4. Create a maximum varible to store the maximum product
5. Return the maximum product

int maxi = INT_MIN
for(i=0 - n)
prod=1
for(j=1 - n)
prod = prod*arr[j]
maxi = max(maxi, prod)
return maxi

TC : O(N^2)
SC : O(1)

*/

int maximum_subarray_product_better(vector<int> &arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = i; j < n; j++)
        {
            prod = prod * arr[j];
            maxi = max(maxi, prod);
        }
    }
    return maxi;
}

/*
Optimal using pefix and suffix product
1. By optimising the better the better approach by using the O(N) time complexicity
2. IF there are negative and positives and zeroes elements in an array then
    if pos - entire array will have the maximum subarray product
    if neg - if negative the entire subarray will have the negative product
             -> if there are 3 negative then by removing the 1 negative will be max product cause (-)*(-) results into maximum
    if zero - if there are zeros then update the prefix=1 and suffix=1

    int maxi = INT_MIN
    pre=1
    suff=1
    for(i=0 - n)
    {
    if(pre==0)
    pre=1
    if(suff==0)
    suff=1
    pre= pre*arr[i]
    suff = suff*arr[n-i-1]
    maxi = max(maxi, max(pre, suff))

    return maxi
    }

    TC : O(N)
    SC : O(1)
*/

int maximum_subarray_product_optimal(vector<int> &arr)
{
        int n = arr.size();
        int maxi = INT_MIN;
        int pre = 1;
        int suff = 1;
        
        for(int i=0; i<n; i++) { 
           if(pre == 0)
               pre = 1;
           if(suff == 0)
               suff = 1;
           pre = pre * arr[i];
           suff = suff * arr[n-i-1];
           maxi = max(maxi, max(pre, suff));
        }

        return maxi;
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
        // cout << maximum_subarray_product_brute(arr);
        // cout << maximum_subarray_product_better(arr);
        cout << maximum_subarray_product_optimal(arr);
    }
    return 0;
}