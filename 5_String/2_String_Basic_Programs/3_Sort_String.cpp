#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

/*
    TC : O(n log n)
    SC : O(1)

*/

void sortString(string &str)
{
    sort(str.begin(), str.end());
    cout << str;
}


/*
    Using hash Array

    Algorithm:
    1. Create a hashed array to store characters the'a' to 'z'.
    2. Initialize the characters with zero.
    3. Run a for loop 
        -->inside for loop
           'a' - 'a' = 0
            str[i] - 'a' --> location of characters
    4.Traverse the hash array and print the characters

    TC : O(n)
    SC : O(1)


*/

void sortStringUsingHashArray(string &str)
{
    // creating hash array
    int charCount[MAX_CHAR] = {0};

    for(int i=0; i<str.length(); i++)
    {
        //a-a = 0, b-a= 1
        charCount[str[i] - 'a']++;
    }

    //Traversing the hash array
    for(int i=0; i<MAX_CHAR; i++)
    {
        for(int j=0; j<charCount[i]; j++)
        cout << (char)('a' + i);
    }

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
        // sortString(str);
        sortStringUsingHashArray(str);
        
    }
    return 0;
}