#include<bits/stdc++.h>
using namespace  std;

int main(){
/*
What is an unordered set?
solution: It doesn't sores the elements in particular order
*/

// same opertion as set only  elements are not in any particular order

  unordered_set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements are in set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }

  //Operation are

  /*
  Erase
  Traverse
  clear
  
  find---->
  unordered_set<int> s;
s.insert(1);
s.insert(2);
if(s.find(2)!=s.end())
cout<<"true"<<endl;
  
  
  */


return 0;
}