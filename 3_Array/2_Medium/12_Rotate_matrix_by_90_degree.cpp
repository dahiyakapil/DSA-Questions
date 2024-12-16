#include<bits/stdc++.h>
 using namespace std;

 vector<int> rotateMatrix(vector<vector<int>> &matrix, int n, int m){
    //Transpose of matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reversing the row
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

 }

int main(){
            int t;
            cin >> t;
            while (t--)
            {
                int n;
                cin >> n;
                vector<int> arr(n);
                for (int i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }
            
            }
return 0;
}