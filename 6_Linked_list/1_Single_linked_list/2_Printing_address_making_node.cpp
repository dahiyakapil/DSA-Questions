#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;   // Initialising the Value
    Node *next; // Initialising Pointer to the next value

    //Creating constructor
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

int main()
{
    //Creating a vector array
    vector<int> arr = {1, 2, 3, 4};

    // Creating  a Node x with the first element and a null next reference
    Node x = Node(arr[0], nullptr);

    // Creating a pointer to the node x
    Node *y = &x;

    cout << y << '\n';

    return 0;
} 


/*

Algorithm: CreateNode(data, next)

Input: data - integer representing the data of the node
       next - pointer to the next node

Output: A new Node with the specified data and next pointer

1. Create a new instance of the Node class with data equal to the provided 'data' and next pointer equal to the provided 'next'.
2. Return the newly created Node.

Algorithm: Main()

1. Initialize a vector arr with integer values {23, 5, 20, 77}.

2. Create a new Node instance named 'x' with data equal to the first element of arr (arr[0]) using the CreateNode algorithm.

3. Create a pointer 'y' and set it to the address of the 'x' node.

4. Print the address of the node 'y'.

5. Return 0.
*/

