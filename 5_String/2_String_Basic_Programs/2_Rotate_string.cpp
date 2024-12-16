#include <bits/stdc++.h>
using namespace std;

void leftRotate(string &str, int d)
{
    reverse(str.begin(), str.begin()+d);
    reverse(str.begin()+d, str.end());
    reverse(str.begin(), str.end());
    cout << str << endl;
}


void rightRotation(string &str, int d)
{
    leftRotate(str, str.length()-d);
  
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin, str);
        int d;
        cin >> d;
        leftRotate(str, d);
        rightRotation(str, d);
          cout << str;
        
    }
    return 0;
}