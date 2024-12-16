#include <bits/stdc++.h>
using namespace std;

int res(vector<int> &arr)
{
    int n = arr.size();
    int low=0;
    int next=low+1;
    for(int i=0; i<n; i++)
    {
        
    }

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
        cout << res(arr);

    }
    return 0;
}