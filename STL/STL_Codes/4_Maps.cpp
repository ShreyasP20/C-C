/*Maps in C++ Creates a Key value pairs.Stores in according to the key values ascending order
    Every element of map is a pair, NOT CONSECUTIVE MEMORY Pairs
    Keys are in Sorted Order and UNIQUE
    */

#include<bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for(auto &pair : m)
    {
        cout << pair.first << " "<< pair.second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1]="ABCD";
    m.insert({2, "ABD"});// TO insert a pair in map
    map<int, string> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it)
    {
        cout << (*it).first << " "<< (*it).second;
    }
    /*Without using iterator 
        for(auto pr : m){
            cout << pr.first << " " << pr.second;
        }
    */
   auto pr = m.find(3);// .find(key) --- returns iterator if key is present and if key is not present then returns iterator with value next to last value
   if(it==m.end())
   {
    cout<<"Not Found";
   }
   else
   {
    cout << (*it).first << " " << (*it).second;
   }
   m.erase(2);// .erase(key OR iterator) --- deletes a particular pair from a map . ..... TAkes KEY OR A ITERATOR AS INPUT---IF ITERATOR OR KEY IS PASSED Which is not present then the segmentation fault is returned
   print(m); 
}