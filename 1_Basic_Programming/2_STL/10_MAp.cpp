#include<bits/stdc++.h>
 using namespace std;

int main(){
/*

Map  is a container that contains a key and value pair.

*/

//Using insert operation
map<int,int> mp;
mp.insert({1,10});
mp.insert({2,20});
mp.insert({3,30});
mp.insert({4,40});
mp.insert({5,50});

for(auto it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
cout<<endl;

//Using for loop
for(auto it=1;it<=10;it++)
{
    mp.insert({it, it*10});
}
for(auto it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
cout<<endl;

//Erase operation
mp.erase(mp.begin());
cout<<"After deleting the first element from the map: "<<endl;
for(auto it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
cout<<endl;

cout<<"The size of the map is: "<<mp.size();
cout<<endl;

//Accessing the map value individually
cout<<mp[2]<<endl;
cout<<mp[8]<<endl;
cout<<mp[6]<<endl;

//Access the value
auto it=mp.find(2);
cout<<*(it).second;


return 0;
}