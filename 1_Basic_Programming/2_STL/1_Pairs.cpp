#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p = {1, 4};
    cout << p.first << " " << p.second << endl;

    // For storing multiple values
    //  pair<int, pair<int, int>> p = {1,{2,3}};
    //  cout<<p.first;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].second << endl; // Printing the second element of the array index 0 that is 2
    cout << arr[1].second << endl;
    cout << arr[2].second;

    return 0;
}


