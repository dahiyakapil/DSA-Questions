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
Algorithm: removeElement(head, ele)

Input: head - pointer to the head of the linked list
       ele  - element to be removed

Output: Updated linked list after removing the specified element

1. If head is NULL:
    a. Return head (empty list).

2. If the element to be removed is the first element (head->data == ele):
    a. Create a temporary pointer temp and set it to head.
    b. Update head to point to the second element (head->next).
    c. Free the memory of temp.
    d. Return the updated head.

3. Initialize two pointers, temp and prev, and set them to head.

4. Traverse the linked list until the specified element is found or the end is reached:
    a. While temp is not NULL:
        i. If temp's data is equal to the specified element (temp->data == ele):
            - Check if prev is not NULL:
                * Update prev's next to skip the node with the specified element.
                * Free the memory of temp.
            - If prev is NULL (the specified element is in the first node):
                * Update head to skip the first node.
                * Free the memory of temp.
            - Break out of the loop.

        ii. Update prev to temp.
        iii. Move temp to the next node.

5. Return the updated head.

*/

Node *removeElement(Node *head, int ele)
{
    // edge cases if LL is empty
    if (head == NULL)
        return head;

    if (head->data == ele)
    {
        Node *temp = head;
        head = head->next; // New head will be second element
        free(temp);
        return head;
    }

    // Traverse through LL
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {

        if (temp->data == ele)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }

        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {12, 45, 22, 78};
    Node *head = convertingArrToLL(arr);
    head = removeElement(head, 78);
    print(head);
    return 0;
}