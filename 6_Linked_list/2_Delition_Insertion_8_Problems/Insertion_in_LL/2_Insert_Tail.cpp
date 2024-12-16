#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *convertingArrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


Node *insertTail(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(val);
    temp->next = newNode;
    return head;
}


int main()
{

    vector<int> arr = {3, 45, 11, 20};
    Node *head = convertingArrToLL(arr);
    head = insertTail(head, 100);
    print(head);

    return 0;
}


/*
Algorithm: insertTail

Input:
  - head: Pointer to the current head of the linked list.
  - val: Value to be inserted in the new node.

Output:
  - Returns a pointer to the head of the updated linked list.

Steps:
1. If the linked list is empty (head is NULL):
   - Create a new node with the given value.
   - Return the new node as the head of the linked list.

2. Traverse the linked list to the last node:
- Initialize a temporary pointer (temp) to the head of the linked list.
- Iterate through the linked list until the last node is reached (temp->next is NULL).

3. Insert a new node at the end:
- Create a new node with the given value.
- Set the next pointer of the last node (temp) to point to the newly created node.

4. Return the original head of the linked list:
- Return the original head of the linked list.

*/

