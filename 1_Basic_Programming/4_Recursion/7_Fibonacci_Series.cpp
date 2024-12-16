#include<bits/stdc++.h>
 using namespace std;

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    int last = fibonacci(n-1);
    int secondlast=fibonacci(n-2);
    return last+secondlast;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fibonacci(n);
    }

return 0;
}