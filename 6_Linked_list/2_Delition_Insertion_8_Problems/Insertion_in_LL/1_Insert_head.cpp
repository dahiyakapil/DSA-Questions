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

/*

Algorithm: insertHead

Input:
  - head: Pointer to the current head of the linked list.
  - val: Value to be inserted in the new node.
Output:
  - Returns a pointer to the new head of the linked list.

Steps:
1. Create a new node (temp) with the given value (val) and set its next pointer to the current head.
   - temp = new Node(val, head)

2. Update the head pointer to point to the newly created node.
   - return temp

*/

Node *insertHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}


int main()
{

    vector<int> arr = {3, 45, 11, 20};
    Node *head = convertingArrToLL(arr);
    head = insertHead(head, 100);
    print(head);

    return 0;
}