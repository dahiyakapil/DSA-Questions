

/*

#include <bits/stdc++.h>
using namespace std;

//O(N)
int largerElement(int arr[], int n)
{
    int largest = arr[0]; //1
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest) //
        {

            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << largerElement(arr, n);
    }

    return 0;
}

*/

#include<bits/stdc++.h>
 using namespace std;

int large(int arr[],  int n){
    int largest =  arr[0];
    for( int i=0; i<n;i++){
        if(arr[i] > largest ){
            largest = arr[i];
        }
    }
    return largest;
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
        cout<<large(arr, n);
    }
return 0;
}