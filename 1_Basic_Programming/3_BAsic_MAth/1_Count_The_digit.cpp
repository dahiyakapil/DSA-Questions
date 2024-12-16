#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{

    int m = n, count = 0;
    while (m != 0) 
    {
         m = m / 10;
        count++;
    }
    return count;
}

int main()
{
    int n; 
    cin >> n;
    cout << countDigit(n);

    return 0;
}