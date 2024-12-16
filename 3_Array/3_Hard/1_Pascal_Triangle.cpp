#include <bits/stdc++.h>
using namespace std;

// calculate nCr basic
int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

int calculate_nCr(int n, int r)
{
    // Formula - nCr = n! / (r! * (n - r)!)
    return fact(n) / (fact(r) * fact(n - r));
}

// Variation 1
//  int nCr(int n, int r) // n = r-1, r = c-1
//  {
//      int res = 1;
//      for (int i = 0; i < r; i++)
//      {
//          res = res * (n - i); // 1 * (7-0)
//          res = res / (i + 1); // 7/(0+1) --> (7/1) (6/2) like this
//      }
//      return res;
//  }

// int pascalTriangle(int r, int c)
// {
//     int element = nCr(r-1, c-1);
//     return element;
// }

// variation 2
// int nCr(int n, int r)
// {
//     long long res = 1;

//     // calculating nCr:
//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// void pascalTriangle(int n)
// {
//     // printing the entire row n:
//     for (int c = 1; c <= n; c++)
//     {
//         cout << nCr(n - 1, c - 1) << " ";
//     }
// }

// variation 3 Print the entire pascal triangle

int nCr(int n, int r)
{
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

vector<vector<int>> print_entire_pascal_triagle(int n)
{
    vector<vector<int>> ans;
    for (int row = 1; row <= n; row++)
    {
        vector<int> tempList;
        for (int col = 1; col <= row; col++)
        {
            tempList.push_back(nCr(row - 1, col - 1));
        }
        ans.push_back(tempList);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // Variation 1 print the element
        //  int r, c;
        //  cin >> r >> c;

        // int n, r;
        // cin>>n>>r;

        // Firstly calculate nCr formula
        //  cout<<calculate_nCr(n , r);
        //  cout << pascalTriangle(r, c);

        // variation 2 print row of pascal triangle
        // int n;
        // cin >> n;
        // pascalTriangle(n);

        // Variation 3 print the entire pascal triangle

        int n;
        cin >> n;
        vector<vector<int>> ans = print_entire_pascal_triagle(n);
        for (auto it : ans)
        {
            for (auto ele : it)
            {
                cout << ele << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
