#include <bits/stdc++.h>
using namespace std;


/*
TC : O(N)
SC : O(N)
*/
void printName(int i, int n)
{
    if (i > n) //(1,10) it will terminate at(11,10)
        return;
    cout << "kapil"<<endl;
    printName(i + 1, n); //Incrementing the i value by 1
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        printName(1, n);
    }

    return 0;
}