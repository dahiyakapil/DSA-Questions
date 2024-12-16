#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Pre compute in hash array
    int hash[10] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1; // incrementing indexing of hash array
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }

    return 0;
}