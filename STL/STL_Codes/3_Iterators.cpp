#include<bits/stdc++.h>
using namespace std;
//Iterators Are Pointers for Vectors
/*it++ -> Points to next iterator
  it+1 -> Points to next location therefore the next location might not be vector
  For Pairs >>In iterators pointer
  can be used as 
  it->first and it->second INSTEAD OF (*it).first and (it*).second */
int main()
{
    vector<int> v={1,2,3,4,5};
    for(int i=0;i<v.size();i++)
    {
        cout<< v[i]<<"";
    }
    cout<<endl;
    vector<int> :: iterator it = v.begin();//.begin(); makes iterator point to the first location of the vector
    cout << (*(it));
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<(*(it));
    }
    cout << endl;
    for(int value : v)// RANGED BASED KEYWORDS
    {
        cout << value;// Value is a copy of the vector numbers and not the actual value IF ACTUAL VALUE IS TO BE CHANGED THEN USE '&'
    }
    /*Instead of writing the entire pointer Iterator
    auto is used to directly assign the keyword
    ex auto it = v.begin()
    therefore gives vector v data type to it*/
}