#include<bits/stdc++.h>
 using namespace std;

 int reverse_Number(int n){
    int m=n, lastDigit, rev=0;  //n = 7789
    while(m!=0){
        lastDigit=m%10; // 7789%10 = 9, 8, 7, 7
        rev=(rev*10)+lastDigit; // rev = (0*9)+9 = 9
        m=m/10; // 7789/10 = 778
    }
    return rev;
 }

int main(){
    int n;
    cin>>n;
    cout<<reverse_Number(n);

return 0;
}