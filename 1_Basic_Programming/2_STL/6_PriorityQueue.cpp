#include<bits/stdc++.h>
 using namespace std;

 void priorityQueue(priority_queue<int> pq1){
    priority_queue<int> pq2=pq1;
    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
 }

int main(){
    priority_queue<int> pq;
    for(int i=0;i<=5;i++){
        pq.push(i);
    }

    cout<<"The elements are in priority queues are: ";
    priorityQueue(pq);
    cout<<endl;

    cout<<"Size of queue: "<<pq.size()<<endl;
    cout<<"The front element of the queue is: "<<pq.top()<<endl;
    cout<<"Deleting the first element from the queue: ";
    pq.pop();
    cout<<endl;
    priorityQueue(pq);
    cout<<endl;

    cout<<"To check if queue is empty of not: ";
    if(pq.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }

return 0;
}