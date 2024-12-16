#include <bits/stdc++.h>
using namespace std;

//Parameterized Way
// void sumOfNaturalNumber(int i, int sum)
// {
//     if (i < 1)
//     {
//         cout << sum << endl;
//         return;
//     }
//     sumOfNaturalNumber(i - 1, sum + i);
// }

//Functional way
int sum(int n){
    if(n==0){
        return 0;
    }
    return n + sum(n-1);

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // sumOfNaturalNumber(n,0);
        cout<<sum(n);
    }

    return 0;
}