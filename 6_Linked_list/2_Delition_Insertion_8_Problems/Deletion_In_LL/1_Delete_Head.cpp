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

// For printing the lL
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}


/*

Algorithm: deleteHead(head)

Input: head - pointer to the head of the linked list

Output: Updated linked list after removing the first node

1. If head is nullptr (empty list):
    a. Return nullptr (empty list).
2. Create a temporary pointer temp and set it to head.
3. Update head to point to the next node (head->next).
4. Delete the memory of the original head (temp).
5. Return the updated head.

*/

Node *deleteHead(Node *head)
{
    // Edge case: empty list
    if (head == nullptr)
    {
        return nullptr;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main()
{

    vector<int> arr = {3, 45, 11, 20};
    Node *head = convertingArrToLL(arr);
    head = deleteHead(head);
    print(head);
    return 0;
}