#include<bits/stdc++.h>
 using namespace std;

 int missing_Number_hash(vector<int> &arr, int n){
        int hash[n+1] = {0};

        for(int i =0;i<n-1; i++){
            hash[arr[i]]++;
        }

        for(int i=1; i<=n; i++){
            if(hash[i] == 0){
                return i;
            }
        }
        return -1;
 }


 int missing_Number_optimal(int arr[], int n){
    int sum1 =(n * (n + 1)) / 2;
    int sum2=0;
    for(int i=0;i<n-1;i++){
        sum2 = sum2 + arr[i];
    }
        int missingNumber = sum1 - sum2;
        return missingNumber;
 }

int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }

            cout<<missing_Number_optimal(arr, n);
          
        }

return 0;
}