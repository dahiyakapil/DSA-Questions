#include<bits/stdc++.h>
 using namespace std;

int main(){
    /*
    Multiset are stored in sorted order and elements are not unique multiple occurence are stored.
    
    */
    multiset<int> ms;
    for(int i=1;i<=10;i++){
        ms.insert(i);
    }

    for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }

    ms.insert(8);
    cout<<endl;

    cout<<"After inserting 8 again:"<<endl;
    for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }

    //Rest operation same as set

    

return 0;
}