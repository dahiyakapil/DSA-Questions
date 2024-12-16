// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:         // access modifier
//     int data;   // data value
//     Node *next; // pointer to the next value

// public:
//     // Constructor
//     Node(int data1, Node *next1)
//     {
//         data = data1; // Initialize data with the provided value
//         next = next1; // Initialize next with the provided
//     }

//     // Accessing value

//     Node(int data1) // Multiple constructor
//     {
//         data = data1;
//         next = nullptr;
//     }
// };

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4};
//     Node *y = new Node(arr[0]);
//     cout << y << '\n';
//     cout << y->data << '\n';
//     return 0;
// }


/*
Algorithm: CreateLinkedListFromArray(arr)

Input: arr - vector of integers representing elements of the linked list

Output: Head pointer of the created linked list

1. Initialize an empty linked list represented by a head pointer, say head.

2. For each element 'elem' in the input vector arr:
    a. Create a new node with data equal to 'elem' and next pointer initially set to nullptr.
    b. If the linked list is empty (head is nullptr), set the head to point to the newly created node.
    c. If the linked list is not empty, traverse to the end of the linked list and set the next pointer of the last node to the newly created node.

3. Return the head of the linked list.

Algorithm: Main()

1. Initialize a vector arr with integer values {12, 33, 65, 19}.

2. Create an instance of the Node class, named 'x', with data equal to the first element of arr (arr[0]).

3. Print the data of node 'x'.

4. Print the address of node 'x'.

5. Return 0.

*/


#include<bits/stdc++.h>
 using namespace std;

 class Node{
     public:
     int data;
     Node* next;

     Node(int data1, Node* next1) 
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

int main(){

    vector<int> arr = {12,33,65,19};
    Node* x = new Node(arr[0]); //object of Node class
    cout << x->data<<" ";
    cout << x << endl;
return 0;
}