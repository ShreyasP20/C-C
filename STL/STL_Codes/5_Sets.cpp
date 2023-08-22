//SETS-Similar to Maps 
#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string value : s)
    {
        cout << value << endl;
    }
    for(auto it = s.begin(); it!=s.end(); ++it){
        cout << (*it) <<endl;
    }
}
int main()
{
    //Sets are maps without values;Collection of things; STORES UNIQUE ELEMTS NO REPITITION
    set<string> s;//STORES ELEMENT IN SORTED ORDER
    s.insert("ABC");
    s.insert("BCD");
    s.insert("UIPO");
    s.insert("ZSDF");//TO insert values in set
    auto it = s.find("ABC");// TO FIND ELEMTS IN SET log(n)
    s.erase(s.find("ABC"));//ERASES A PART ENTRY ON THE BASIS OF THE ITERATOR
    print(s);
    s.erase("UIPO");//CAN ALSO DELETE BY USING KEY
    print(s);
    //RED BLACK TRESS ARE USED FOR IMPLEMENTATION OF SETS


    
    //UNORDERED SETS ARE USED TO FIND THE PRESENCE OF AN ELEMENT
    unordered_set<string> us;
    s.insert("ABC");
    s.insert("BCD");
    s.insert("UIPO");
    s.insert("ZSDF");
    auto it = s.find("ABC");
    s.erase(s.find("ABC"));
    print(s);
    s.erase("UIPO");
    print(s);
    //UNORDERED SETS CANNOT HAVE NESTED STL DATA TYPES

   //MULTISET are used when the elemts can be non unique that is repetitive
   //Priority queue are used there MUltiset can be used
    multiset<string> ms;
    s.insert("ABC");
    s.insert("BCD");
    s.insert("UIPO");
    s.insert("ZSDF");
    auto it = s.find("ABC");
    s.erase(s.find("ABC"));
    print(s);
    s.erase("UIPO");//if u pass some value then it deletes all the keys wiith the same value : BUT IT DELETES FIRST ONE
    print(s);
}