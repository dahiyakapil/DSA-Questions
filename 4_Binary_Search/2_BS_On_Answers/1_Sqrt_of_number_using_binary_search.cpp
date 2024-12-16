#include <bits/stdc++.h>
using namespace std;

/*
Brute force approach
using linear Search

Algorithm:
1. Declare a var ans to store the output and initialize it with zero
2. Run a for loop from 1 to n
3. Declare another var val for storing the square of number --> val = i*i
4. if val less then n then store the square(i) into ans --> ans = i
5. Else break
6. Return ans


PC :
    int sqrtNumber(n)
    int ans=0
    for(i=1-n)
    {
    int val=i*i
    if(val<=n)
    ans=i
    else
    break
    }
    return ans


TC : O(N)
SC : O(1)

*/
int sqrtOfNumber_brute(int n)
{
    long long ans = 0;
    for (int i = 1; i < n; i++)
    {
        long long val = i * i;
        if (val <= n)
        {
            ans = i;
        }
        else
        {
            break;
        }
    }
    return ans;
}

/*
Optimal Approach
using inbuilt function

sqrt(n)
*/

int sqrtOfNumber_optimal1(int n)
{
    int ans = sqrt(n);
    return ans;
}

/*

Optimal Approach2
Using Binary Search

Algo:
1. Declare two var low=1 and high=n
2. Run a while loop
    ->inside loop
        Calculate mid = low+high / 2
        Declare a ans var to store the squares --> ans = mid * mid
        if ans is less than the number then find in right half -- low=mid+1
        else if ans is greater than then find in the left half --> right=mid-1
3. Return ans or high

PC:
    int f(n)
    {
        low=1, high=n
        while(low<=high)
        {
            mid=low+high / 2
            ans=mid*mid
            if(ans<=n)
            low=mid+1
            else
            high=mid-1
        }
        return high
    }
*/

int sqrtOfNumber_optimal2(int n)
{
    int low=1, high=n; // 1 to 25
    while(low<high)
    {
        int mid = (low+high)/2; // 13
        int ans = mid*mid; // 169
        if(ans <= n) //169<=n No
        {
            low=mid+1;
        }
        else
        {
            high=mid-1; // Yes 
        }

    }
    return high;
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
        cout << sqrtOfNumber_brute(n);
        cout << endl;
        cout << sqrtOfNumber_optimal1(n);
        cout<<endl;
        cout << sqrtOfNumber_optimal2(n);
    }
    return 0;
}