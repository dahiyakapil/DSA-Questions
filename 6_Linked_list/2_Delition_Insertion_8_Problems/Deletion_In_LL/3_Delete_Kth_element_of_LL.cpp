
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

    Algorithm: removeK(head, k)

Input: head - pointer to the head of the linked list
       k    - the position of the node to be removed

Output: Updated linked list after removing the kth node

1. If head is NULL, return head (empty list).

2. If k is 1:
    a. Create a temporary node temp and set it to head.
    b. Update head to temp's next.
    c. Free the memory of temp.
    d. Return the updated head.

3. For k greater than 1 (middle nodes):
    a. Initialize a counter cnt to 0.
    b. Create two pointers, temp and prev, and set them to head initially.

    c. Traverse the linked list using a while loop until temp is not NULL:
        i. Increment cnt by 1.
        ii. If cnt is equal to k:
            - If prev is not NULL:
                * Update prev's next to skip the kth node.
                * Free the memory of temp.
                * Break out of the loop.
            - If prev is NULL (kth node is the first node):
                * Update head to skip the first node.
                * Free the memory of temp.
                * Break out of the loop.

        iii. Update prev to temp.
        iv. Move temp to the next node.

4. Return the updated head.
*/

Node *removeK(Node *head, int k)
{
    // edge cases if LL is empty
    if (head == NULL)
        return head;

    // if k == 1
    if (k == 1)
    {
        Node *temp = head; // Temp node equals to head it preserve the head i.e. copy of head
        head = head->next; // New head will be second element
        free(temp);
        return head; // returning new head
    }

    // if k=2 or k=3 i.e. middle nodes

    int cnt = 0;

    // Traverse through LL
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        cnt++;

        // If counter matches the k or equals to the K
        if (cnt == k)
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
    head = removeK(head, 2);
    print(head);

    return 0;
}