#include <bits/stdc++.h>
using namespace std;

/*
   Rules for writing patterns;

   1.For the outer loop, count the number of lines
   2.For the inner loop, focus on columns, and connect somehow to the rows
   3.Print the " * " inside the inner loop
   4.Observe symmetry of pattern (Optional step).

*/

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // Printing the row number only
            cout << i;
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // for stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print12(int n){
    for(int i=1;i<=n;i++){
        //For printing numbers
        int space=2*(n-1);
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //For printing space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }


        //For printing numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space = space-2;
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
        print1(n);
        print2(n);
        print3(n);
        print4(n);
        print5(n);
        print6(n);
        print7(n);
        print12(n);
    }

    return 0;
}