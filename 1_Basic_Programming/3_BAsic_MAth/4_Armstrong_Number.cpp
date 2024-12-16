#include<bits/stdc++.h>
 using namespace std;
 void armstrongNumber(int n){
         int m=n, lastDigit, sum=0;
    while(m!=0){
        lastDigit=m%10; //153%10=3, 5, 1
        sum=sum+(lastDigit*lastDigit*lastDigit); //0 +3*3*3
        m=m/10; //153/10=15
    }
    if(sum==n){
        cout<<"Armstrong Number"<<endl;
    }
    else{
         cout<<"Not Armstrong Number"<<endl;
    }
    
 }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        armstrongNumber(n);
    }
    

return 0;
}