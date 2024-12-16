#include<bits/stdc++.h>
 using namespace std;

 void printQueue(queue<int> q1){
    queue<int>q2=q1;
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
 }

int main(){
    queue<int> q;
    for(int i=0;i<=5;i++){
        q.push(i);
       
    }

    cout<<"The elements are in the queue: ";
    printQueue(q);
    cout<<endl;

    cout<<"Size of queue: "<<q.size()<<endl;
    cout<<"The front element of the queue is: "<<q.front()<<endl;
    cout<<"The Rear element of the queue is: "<<q.back()<<endl;
    cout<<"Deleting the first element from the queue: ";
    q.pop();
    cout<<endl;
    printQueue(q);
    cout<<endl;

    cout<<"To check if queue is empty of not: ";
    if(q.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }

return 0;
}