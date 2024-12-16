#include<bits/stdc++.h>
 using namespace std;

/*
TC: O(N)
SC: O(N)
*/
 int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
 }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact(n)<<endl;

    }

return 0;
}