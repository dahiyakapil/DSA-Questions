// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;

// int main()
// {
//   vector<int> v;

//   for (int i = 0; i < 10; i++)
//   {
//     v.push_back(i); // inserting elements in the vector
//   }

//   cout << "the elements in the vector: ";
//   for (auto it = v.begin(); it != v.end(); it++)
//     cout << *it << " ";

//   // Important operation
//   cout << v.size() << endl;          // Returns the size of the vector
//   cout << v.front() << endl;         // Returns the first element
//   cout << v.back() << endl;          // Returns the last element
//   cout << v[(v.size() - 1)] << endl; // Deleting the last element
//   v.pop_back();                      // Delete

//   // Printing the vector after deleting the last element
//   for (int i = 0; i < v.size(); i++)
//   {
//     cout << v[i] << " ";
//   }

//   auto it = v.begin();
//   v.insert(it, 100);
//   // Accessing the first element
//   cout << v[0];

//   // Deleting the element from beginning
//   v.erase(it);

//   // Check if vector is empty or not
//   if (v.empty())
//   {
//     cout << "Yes, vector is empty";
//   }
//   else
//   {
//     cout << "No, vector is not empty";
//   }

//   // Clearing all the elements present in the vector
//   v.clear();
//   cout << "Size of the vector now: " << v.size();

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> v;

  for (int i = 0; i < 10; i++)
  {
    v.push_back(i);
  }

  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }

  cout << endl;

  cout << v.size() << endl;
  cout << v.front() << endl;
  cout << v.back() << endl;
  v.pop_back();

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  cout << endl;

  auto it = v.begin();
  v.insert(it, 300);

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  cout << endl;

  cout << v[0];

  cout << endl;

  if (v.empty())
  {
    cout << "Vector is Empty" << endl;
  }
  else
  {
    cout << "NO";
  }

  cout << endl;

  v.clear();

  cout << v.size();

  cout << endl;

  auto itx = v.begin();
  v.insert(itx, 123);

  for(int i=0; i<v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}
