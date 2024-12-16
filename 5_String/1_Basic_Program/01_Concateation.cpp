#include <bits/stdc++.h>
using namespace std;

 bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
        {
            string sumOFWord1;
            for (string str: word1)
            {
                sumOFWord1 += str;
            }

            string sumOfWord2;
            for (string str: word2)
            {
                sumOfWord2 += str;
            }

            return sumOFWord1 == sumOfWord2;
        }

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        vector<string> word1;
        vector<string> word2;

        //For entering words separate by spaces
        string input_word;

        //input for word1
        getline(cin, input_word);
        istringstream iss_word1(input_word);
        while(iss_word1 >> input_word)
        {
            word1.push_back(input_word);
        }

        getline(cin, input_word);
        istringstream iss_word2(input_word);
        while(iss_word2 >> input_word)
        {
            word2.push_back(input_word);
        }

        bool result = arrayStringsAreEqual(word1, word2);
        cout << result;

    }

    return 0;
}
