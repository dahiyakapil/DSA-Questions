#include<bits/stdc++.h>
 using namespace std;

 string equalString(string str1, string str2)
 {
            if(str1 == str1)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
 }

int main(){

    int t;
    cin>>t;
    while(t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        cout << equalString(str1, str2);

    }

return 0;
}