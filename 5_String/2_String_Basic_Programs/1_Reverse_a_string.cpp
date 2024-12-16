#include <bits/stdc++.h>
using namespace std;

string reverseString(string s1)
{
    string s2;
    int rev;
    int len = s1.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (s1[i] == '.')
        {
            rev = len - i;
            len = i - 1;
            s2.append(s1.substr(i + 1, rev));
            s2.append(".");
        }
    }
    s2.append(s1.substr(0, len + 1));
    return s2;
}

/*
Using stack

TC : O(n)
SC : O(n)
Execution time - 16ms
*/
void reverseStringUsingStack(string &str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = st.top();
        st.pop();
    }
}

/*
    Using two pointers 
    TC : O(n)
    SC : O(1)
    Execution time - 18ms

*/
void reverseStringUsingTwoPointers(string &str)
{
    int n = str.length();
    int i = 0;
    int j = str.length() - 1;

    while(i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
}


/*
    Using inbuilt function

    TC : O(n)
    SC : O(1)
    Execution time - 19ms

*/
void reverseStringUsingInbuiltFunction(string &str)
{
    reverse(str.begin(), str.end());
}


int main()
{
    // string s1;
    // getline(cin, s1);
    // cout << reverseString(s1);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin, str);
        // reverseStringUsingStack(str);
        reverseStringUsingTwoPointers(str);
        // reverseStringUsingInbuiltFunction(str);
        cout << str;
    }

    return 0;
}
