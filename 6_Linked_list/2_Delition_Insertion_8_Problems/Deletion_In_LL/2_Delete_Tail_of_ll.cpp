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

/*

   Delete Tail of LL

   Algo
   1. If head is empty and next of the head is also empty then return null
   2. Create a temp node an make it equal to the head
   3. Check if temp's next to next is not equal to null (second last element)
   4. Move temp equals to next to next
   5. Delete the temp
   6. Make temp->next = nullptr
   7. Return head
*/

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

/*

Algorithm: removeTail(head)

Input: head - pointer to the head of the linked list

Output: Updated linked list after removing the last node

1. If head is NULL or head has only one node:
    a. Delete the memory of the head.
    b. Return NULL (empty list).

2. Initialize a temporary pointer temp to head.

3. Traverse the linked list until the second-to-last node:
    a. While temp's next node's next is not NULL:
        i. Move temp to the next node.

4. Delete the memory of the last node (temp's next).

5. Set temp's next to nullptr to indicate the end of the updated linked list.

6. Return the original head (updated linked list).

*/

Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

    return head;
}

int main()
{

    vector<int> arr = {3, 45, 11, 20};
    Node *head = convertingArrToLL(arr);
    head = removeTail(head);
    print(head);

    return 0;
}