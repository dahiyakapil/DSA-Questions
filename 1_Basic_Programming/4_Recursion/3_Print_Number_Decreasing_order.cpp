#include<bits/stdc++.h>
 using namespace std;

void printNumberDecreasingOrder(int i, int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    printNumberDecreasingOrder(i-1,n);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printNumberDecreasingOrder(n, n);
    }


return 0;
}