#include<bits/stdc++.h>
 using namespace std;

 int euclideanAlgo(int a, int b){
    while(a>0 && b>0){
        if(a>b)
        a=a%b;
        else
        b=b%a;
    }
    if(a==0)
    return b;
    else
    return a;
 }

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<euclideanAlgo(a,b);

    }

return 0;
}