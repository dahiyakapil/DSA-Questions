/*
1657. Determine if Two Strings Are Close
Medium


Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.
For example, abcde -> aecdb
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.

 

Example 1:

Input: word1 = "abc", word2 = "bca"
Output: true
Explanation: You can attain word2 from word1 in 2 operations.
Apply Operation 1: "abc" -> "acb"
Apply Operation 1: "acb" -> "bca"
Example 2:

Input: word1 = "a", word2 = "aa"
Output: false
Explanation: It is impossible to attain word2 from word1, or vice versa, in any number of operations.
Example 3:

Input: word1 = "cabbba", word2 = "abbccc"
Output: true
Explanation: You can attain word2 from word1 in 3 operations.
Apply Operation 1: "cabbba" -> "caabbb"
Apply Operation 2: "caabbb" -> "baaccc"
Apply Operation 2: "baaccc" -> "abbccc"


*/


/*

Previous knowledge
1. How to swap two strings

*/


/*
swapString Function Execution:

str1 becomes "HelloHey" (concatenation of str1 and str2).
str2 becomes the substring of str1 from index 0 to (str1.length() - str2.length()), which is "Hello".
str1 becomes the substring of str1 starting from the length of str2, which is "hey".
The function returns the concatenation of str1 and str2, separated by a space: "hey Hello".

*/

#include<bits/stdc++.h>
using namespace std;

string swapString(string str1, string str2)
{
    str1 = str1 + str2; //Hello + hey = HelloHey

    // Extract str2 from str1
    str2 = str1.substr(0, (str1.length() - str2.length()));

    // Extract str1 from updated str1
    str1 = str1.substr(str2.length()); //Hey

    // Return the swapped strings
    return str1 + " " + str2;
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    // Output the result of swapString function
    cout << swapString(str1, str2);

    return 0;
}



/*

Intution

1. Jo char word1 me hai wo char word2 me bhi hona chaiya
2. word1 or word2 dono ki frequency match honi chaiye
*/

/*

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        //lengths of word1 and word2
        int m = word1.length();
        int n = word2.length();
        
        //if lengths of the word1 and word2 are not equal
        if(m != n)  
            return false;
        
        //create vectors to store the freq of (word1, word2)
        vector<int> freq1(26);
        vector<int> freq2(26);
        
        //Traerse throught the string
        for(int i = 0; i<m; i++) {
            char ch1 = word1[i];
            char ch2 = word2[i];
            
            int idx1 = ch1-'a'; //index of word1
            int idx2 = ch2-'a';
            freq1[idx1]++;
            freq2[idx2]++;
        }
        
        //1st case : dono string me same char hona chaiye
        for(int i=0; i<26; i++) {
            if(freq1[i] != 0 && freq2[i] != 0) continue;
            
            if(freq1[i] == 0 && freq2[i] == 0) continue;
            
            return false;
        }
        
        //2nd case : match frequency same freq honi chaiye dono char ki 
        sort(begin(freq1), end(freq1));
        sort(begin(freq2), end(freq2));
        
        return freq1 == freq2;  
    }
};


*/