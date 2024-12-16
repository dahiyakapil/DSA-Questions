#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *convertingArrToDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

/*
Algorithm: deleteTail

Input:
  - head: Pointer to the current head of the doubly linked list.

Output:
  - No explicit output; it modifies the linked list in place.

Steps:
1. // Check if the list is empty or has only one node
   - If head is NULL or head->next is NULL:
     - Return; nothing to delete.

2. // Traverse to the tail of the list
   - Initialize a pointer 'tail' to the head of the list.
   - Iterate through the list until the last node (tail->next == NULL) is reached.

3. // Update pointers for deletion
   - Create a pointer 'newTail' pointing to the node before the tail.
   - Set newTail->next to nullptr to disconnect the tail node.
   - Set tail->back to nullptr to disconnect the backward link of the tail.
*/

Node* deleteTail(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node* tail= head;
    while(tail->next != NULL)
    {
        tail = tail->next;
    }

    Node* newTail = tail->back; //pointer `newTail` pointing to the node before the tail.
    newTail->next = nullptr;
    tail->back = nullptr;//Set `tail->back` to `nullptr` to disconnect the backward link of the tail.
    delete tail;
    return head;
}

int main()
{
    vector<int> arr = {3, 45, 11, 20};
    Node *head = convertingArrToDLL(arr);
    print(head);
    return 0;
}