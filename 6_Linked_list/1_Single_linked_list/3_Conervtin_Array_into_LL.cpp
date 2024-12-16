#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Creating constructor
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    // Creating Multiple constructor

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

/*

Algorithm: convertingArrToLL(arr)

Input: arr - vector of integers representing elements of the linked list

Output: Head pointer of the created linked list

1. Create an empty linked list represented by a head pointer, say head.
2. For each element 'elem' in the input vector arr:
    a. Create a new node with data equal to 'elem' and next pointer initially set to nullptr.
    b. If the linked list is empty (head is nullptr), set the head to point to the newly created node.
    c. If the linked list is not empty, traverse to the end of the linked list and set the next pointer of the last node to the newly created node.
3. Return the head of the linked list.
*/
Node *convertingArrToLL(vector<int> &arr)
{

    Node *head = new Node(arr[0]); // head
    Node *mover = head;

    for (int i = 0; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[1]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main()
{

    vector<int> arr = {45, 22, 113, 24};
    // Node *y = new Node(arr[0]);
    // cout << y << "\n"
    //      << endl;            // Address
    // cout << y->data << '\n'; // value

    Node *head = convertingArrToLL(arr);
    cout << head->data;

    return 0;
}
