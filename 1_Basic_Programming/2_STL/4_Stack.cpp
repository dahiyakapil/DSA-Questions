    /*
 What is Stack?
A stack is a non-primitive linear data structure. it is an ordered list in which the addition of a new data item and deletion of the already existing data item is done from only one end known as the top of the stack (TOS). The element which is added in last will be first to be removed and the element which is inserted first will be removed in last. As all the deletion and insertion in a stack are done from the top of the stack, the last added element will be the first to be removed from the stack. That is the reason why stack is also called Last-in-First-out (LIFO).  

Only 3 opeartion are going to be use push pop top
    */
#include<bits/stdc++.h>
 using namespace std;
 void printStack(stack<int> s1){
    stack<int> s2=s1;
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
 }
 }

int main(){
    stack<int> s;
    for(int i=1;i<=5;i++){
        s.push(i);
    }
 
    cout<<"The elemenst are in the stack: "<<endl;
    printStack(s);
    cout<<endl;

    cout<<"Size of the stack: "<<s.size()<<endl;

    cout<<"The top element is: "<<s.top()<<endl;

    cout<<"Delete the top most element: ";
    s.pop();
    printStack(s);



return 0;
}