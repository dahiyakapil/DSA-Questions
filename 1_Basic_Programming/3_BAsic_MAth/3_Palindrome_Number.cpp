#include<bits/stdc++.h>
 using namespace std;
int reverseNumber(int n){
    int m=n, lastDigit, rev=0;
    while(m!=0){
        lastDigit=m%10;
        rev=(rev*10)+lastDigit;
        m=m/10;
    }
    return rev;
 }



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int duplicate=n;
        int rev = reverseNumber(n);
        if(duplicate==rev){
            cout<<"Palindrome Number"<<endl;
        }
        else{
            cout<<"Not Palindrome Number"<<endl;
        }


    }

return 0;
}