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

Node *insertAtGivenPosition(Node *head, int ele, int k)
{
    // 1.Edge case 1: If the linked list is empty
    if (head == NULL)
    {
        if (k == 1)
        {

            return new Node(ele);
        }
        else
        {
            return head;
        }
    }

    // Case 2: If k is 1
    if (k == 1)
    {
        return new Node(ele, head);
    }

    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == (k - 1))
        {
            Node *x = new Node(ele, temp->next);
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
    head = insertAtGivenPosition(head, 100, 2);
    print(head);
    return 0;
}

/*

Algorithm: insertPosition

Input:
  - head: Pointer to the current head of the linked list.
  - ele: Element to be inserted in the new node.
  - k: Position at which the new node should be inserted.

Output:
  - Returns a pointer to the head of the updated linked list.

Steps:
1. // Edge case 1: If the linked list is empty
   - If head is NULL:
     - If k is 1, create a new node with the given element and return it as the head of the linked list.
     - Otherwise, return the original head since the list is empty, and k is not 1.
     ```
     if (head == NULL)
     {
         if (k == 1)
         {
             return new Node(ele);
         }
         else
         {
             return head;
         }
     }
     ```

2. // Case 2: If k is 1
   - If k is 1, create a new node with the given element and set its next pointer to the current head.
   - Return the new node as the updated head of the linked list.

3. // Case 3: If k is greater than 1
- Initialize a counter variable (cnt) to 0 and a temporary pointer (temp) to the head of the linked list.
- Iterate through the linked list until the node before the specified position (k-1) is reached.
- Create a new node with the given element and set its next pointer to the current next of the temporary node.
- Update the next pointer of the temporary node to point to the newly created node.
- Break out of the loop after the insertion is done.

4. // Return the updated head of the linked list
- Return the original head of the linked list.

*/
