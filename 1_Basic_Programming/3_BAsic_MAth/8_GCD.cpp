#include <bits/stdc++.h>
using namespace std;

int euclideanAlgo(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0)
    return b;
    else
    return b;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2; // 9 12
        cin >> n1 >> n2;
        int gcd = 1;

        //also check for min(n1,n2)
        for (int i = 1; i <= n1; i++)// for loop till 1 to 9
        { 
        if (n1 % i == 0 && n2 % i == 0) // if n1 and n2 are divisible the store the number in gcd
            {
                gcd = i;
            }
        }
        cout << gcd << endl;

    }

    int a=9;
    int b=12;
    cout<<euclideanAlgo(a,b);

    return 0;
}