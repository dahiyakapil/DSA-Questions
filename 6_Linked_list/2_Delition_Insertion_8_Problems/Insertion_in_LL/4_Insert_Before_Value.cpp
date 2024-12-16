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

// Node *insertBeforeValue(Node *head, int ele, int val)
// {
//     // edge case 1 : if list is empty
//     if (head == NULL)
//     {
//        return NULL;
//     }

//     if(head->data == val)
//     {
//         return new Node(ele, head);
//     }


//     Node* temp = head;
//     while(temp != NULL)
//     {
//         if(temp->next->data == val)
//         {
//             Node* x = new Node(ele, temp->next);
//             temp->next = x;
//             break;
//         }
//         temp = temp->next;
//     }
//     return head;
// }

Node* insertBeforeValue(Node* head, int ele, int val)
{
    if(head == NULL)
    {
        return NULL;
    }

    if(head->data == val)
    {
        return new Node(ele, head);
    }

    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->next->data == val)
        {
            Node* x = new Node(ele, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{

    vector<int> arr = {3, 45, 11, 20};
    Node *head = convertingArrToLL(arr);
    head = insertBeforeValue(head, 90, 11);
    print(head);
    return 0;
}


/*

Algorithm: insertBeforeValue

Input:
  - head: Pointer to the current head of the linked list.
  - ele: Element to be inserted in the new node.
  - val: Value before which the new node should be inserted.

Output:
  - Returns a pointer to the head of the updated linked list.

Steps:
1. // Edge case 1: If the linked list is empty
   - If head is NULL, return NULL since the list is empty.
     ```
     if (head == NULL)
     {
         return NULL;
     }
     ```

2. // Case 2: If the value to insert before is found at the head of the list
   - If the data in the head node is equal to the specified value (val):
     - Create a new node with the given element and set its next pointer to the current head.
     - Return the new node as the updated head of the linked list.
     ```
     if (head->data == val)
     {
         return new Node(ele, head);
     }
     ```

3. // Case 3: Traverse the linked list to find the node with the specified value
   - Initialize a temporary pointer (temp) to the head of the linked list.
   - Iterate through the linked list until a node with the specified value (val) is found.
   - Create a new node with the given element and set its next pointer to the current next of the temporary node.
   - Update the next pointer of the temporary node to point to the newly created node.
   - Break out of the loop after the insertion is done.

4. // Return the updated head of the linked list
- Return the original head of the linked list.


*/


