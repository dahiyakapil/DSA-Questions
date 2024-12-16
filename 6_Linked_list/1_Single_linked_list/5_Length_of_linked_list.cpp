
#include<bits/stdc++.h>
 using namespace std;

 class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }

 };

 Node* convertingArrToLL(vector<int> &arr)
 {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1; i<arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
 }

 /*
 Algorithm: lengthOfLL(head)

Input: head - pointer to the head of the linked list

Output: Integer representing the length (number of nodes) of the linked list

1. Initialize a counter cnt to 0.
2. Create a temporary pointer temp and set it to the head of the linked list.
3. While temp is not NULL:
    a. Move temp to the next node.
    b. Increment the counter cnt by 1.
4. Return the final value of the counter cnt, representing the length of the linked list.
 */

 int lengthOfLL(Node* head)
 {
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        temp = temp -> next;
        cnt++;
    }
    return cnt;
 }

int main(){
    vector<int> arr = {12,66,30,77,10};
    Node* head = convertingArrToLL(arr);
    cout << lengthOfLL(head);
return 0;
}
