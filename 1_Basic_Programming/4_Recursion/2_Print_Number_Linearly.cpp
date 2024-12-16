#include <bits/stdc++.h>
using namespace std;

int printNumberLinearly(int i, int n)
{
    if (i > n)
    {
        return 0;
    }
    cout << i << endl;
    printNumberLinearly(i + 1, n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        printNumberLinearly(1, n);
    }

    return 0;
}