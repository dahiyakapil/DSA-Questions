#include <bits/stdc++.h>
using namespace std;

void printList(list<int> l1)
{
    list<int>::iterator it;
    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " "; // * used for accessing the elements present in the list
    }
}

int main()
{

    /*
What is a List?
A list in STL is a contiguous container that allows the inserting and erasing of elements in constant time and iterating in both directions.
    */

    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);

    cout << "Printing the list" << endl;
    printList(l1);
    cout << endl;

    cout << "Inserting element at the front" << endl;
    l1.push_front(5);
    printList(l1);
    cout << endl;

    cout << "Size of the list is: " << l1.size();
    cout << endl;

    cout << "The first element in the list is: " << l1.front() << endl;

    cout << "Deleting the first element: ";
    l1.pop_front();
    cout << endl;

    cout << "Deleting the last element: ";
    l1.pop_back();
    cout << endl;

    cout << "Reverse the list:";
    l1.reverse();
    printList(l1);

    return 0;
}