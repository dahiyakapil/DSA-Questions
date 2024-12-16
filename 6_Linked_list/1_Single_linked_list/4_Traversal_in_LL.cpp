// #include<bits/stdc++.h>
//  using namespace std;

//  class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data1, Node* next1)
//     {
//         data = data1;
//         next = next1;
//     }

//     Node(int data1)
//     {
//         data = data1;
//         next = nullptr;
//     }

//  };

//  Node* convertingArrToLL(vector<int> &arr)
//  {
//     Node* head = new Node(arr[0]);
//     Node* mover = head;

//     for(int i=1; i<arr.size(); i++)
//     {
//         Node* temp = new Node(arr[i]);
//         mover->next = temp;
//         mover = temp;
//     }
//     return head;
//  }

// int main(){

//     vector<int> arr =  {3, 45, 11, 20};
//     Node *head = convertingArrToLL(arr);

//     Node* temp = head;
//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

// return 0;
// }

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

int main()
{

    /*
    Algorithm: Main()
    1. Initialize a vector arr with integer values {32, 44, 10, 87}.
    2. Call the convertingArrToLL algorithm with arr as the input to create a linked list.
    3. Call the PrintLinkedList algorithm with the head of the linked list to print the elements of the linked list.
    4. Return 0.
    */

    vector<int> arr = {32, 44, 10, 87};
    Node *head = convertingArrToLL(arr);

    /*
    Algorithm: PrintLinkedList(head)

    Input: head - pointer to the head of the linked list
    1. Create a temporary pointer temp and set it to the head of the linked list.
    2. While temp is not NULL:
        a. Print the data of the current node.
        b. Move temp to the next node.
    */

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

