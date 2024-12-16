#include<bits/stdc++.h>
 using namespace std;

int main(){
    /*

    Set stores element in sorted order and unique elements.
    
    */
    set<int> s;
    for(int i=0;i<=9;i++){
        s.insert(i);
    }

    cout<<"The elements are: ";
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Size of set: "<<s.size()<<endl;
    s.erase(2);
    cout<<"After deleting 2"<<endl;
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    s.erase(s.begin());
    cout<<"After deleting first element"<<endl;
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    
    if(s.find(2)!=s.end()){
        cout<<"Present in set";
    }
    else{
        cout<<"Not present in set";
    }
    cout<<endl;

    cout<<"To check if the set is empty or not: "<<endl;
    if(s.empty()){
        cout<<"Yes set is empty:";
    } 
    else{
          cout<<"No set is not empty:";
    }

    //Count
    s.count(5);



return 0;
}