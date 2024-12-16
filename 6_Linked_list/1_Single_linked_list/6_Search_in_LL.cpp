// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data1, Node *next1)
//     {
//         data = data1;
//         next = next1;
//     }

//     Node(int data1)
//     {
//         data = data1;
//         next = nullptr;
//     }
// };

// Node *convertingArrToLL(vector<int> &arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *mover = head;

//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *temp = new Node(arr[i]);
//         mover->next = temp;
//         mover = temp;
//     }
//     return head;
// }

// int checkIfPresent(Node *head, int val)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == val)
//             return 1;
//         temp = temp->next;
//     }
//     return 0;
// }

// int main()
// {

//     vector<int> arr = {3, 45, 11, 20};
//     Node *head = convertingArrToLL(arr);
//     cout << checkIfPresent(head, 11);

//     return 0;
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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *convertArrToLL(vector<int> &arr)
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

int searchInLL(Node *head, int val)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            return 1;
        }
            temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {12, 45, 90, 33};
    Node *head = convertArrToLL(arr);
    cout << searchInLL(head, 45);
    return 0;
}