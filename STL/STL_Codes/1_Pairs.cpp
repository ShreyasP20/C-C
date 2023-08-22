#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;
    p = make_pair(1, "Shreyas");  //OR use p={2,"abcd"};
    cout << p.first<<""<<p.second<<endl;
    pair<int,string> p2;
    p2=p;//IF referenced using '&' then the variable rule stands ie the value of the first also changes
    cout << p2.first<<""<<p2.second<<endl; 
    /*if two arrays are related then while operating on them pairs can be used*/
    pair<int, int> p_array[3];
    p_array[0] ={1,2};//Values of both array 1 and array 2 at index 0
    p_array[1]={2,3};
    p_array[2]={4,5};
    for(int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    //Perform Swapping
    swap(p_array[1], p_array[2]);
    for(int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    //ARRAY RELATION MAINTAINED!!!!!
}