#include<bits/stdc++.h>
using namespace std;

void PrintVec(vector<int> v)//If '&' is used the actual vector is passed not a copy so any changes will affect the passed vector also
{
    for(int i = 0; i < v.size(); i++){
        // .size() returns the length of the vector
        cout<< v[i] <<"";  
    }
}
int main()
{
    //Vectors are Dynamic Arrays with syntax:vector<Data_type>
    /*To limit the size of Vector use a number in parenthesis after the variable 
    ex:vector<Data_type> variable(size);
    Even after static allocation size can be changed ;
    To allocated as well as reserve some space with default values we give
    ex:vector<Data_type> variable(size, default_value);
    */
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);//push back basically adds the value x at the end of the vector

    }
    PrintVec(v);
    //for removing the last element we use .pop_back();
    v.pop_back();
    PrintVec(v);
    //Copying vector is simple vector<int> v2= v;
    //Vector can Be used to stores Vectors CONTAINERS!!!
}