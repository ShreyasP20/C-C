/*MAPS AND UNORDERSD ARE ALMOST THE SAME ALL FUNCTIONS REMAIN THE SAME 
    KEY DIFFERENCES
    1.Inbuilt Implementation-USES HASH TABLE
    2.Time Complexity:O(log (1))
    3.VALID KEY DATATYPE
    syntax:unordered_map<int,string> m;*/

#include<bits/stdc++.h>
using namespace std;
void print(unorderd_map<int, string> &m)
{
    cout << m.size() << endl;
    for(auto &pair : m)
    {
        cout << pair.first << " "<< pair.second << endl;
    }
}
int main()
{
    unordered_map<int, string> m;
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
   multimap<pair<int,int> ,string> m; 
}
/*MULTI MAP BASICALLY CAN STORE DUPLICATE VALUES AND MAP DONT__ REST FUNCTIONS REMAIN SAME*/
/*UNORDERED MAPS CANNOT WORK with PAIRS BUT MAPS CAN>> BASICALLY UNORDERED MAPS CANNOT WORK COMPLEX DATA STRUCTURES*/
