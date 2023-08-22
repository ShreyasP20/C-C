#include<bits/stdc++.h>
using namespace std;

void PrintVec(vector<int> v)//If '&' is used the actual vector is passed not a copy so any changes will affect the passed vector also
{
    for(int i = 0; i < v.size(); i++){
        // .size() returns the length of the vector
        cout<< v[i];  
    }
}

int main()
{
    /*Vector of Pairs
    vector<pair<int,int>> v={{1,2},{2,3}};//Pair of vector
    PrintVec(v);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));//OR v.push_back(make_pair(x, y));
    }
    PrintVec(v);*/


    /*For Array of Vectors we use Square brackets
    ex:vector<int> v[Size]
    This is Array of Vector(NOT VECTOR OF ARRAY) THEREFORE WE HAVE n VECTORS STORED IN A ARRAY
    int n;
    cin>>n;
    vector<int> v[n];
    for(int i = 0; i < n; i++)
    {
        int N;
        cin>>N;
        for(int j = 0;j < N; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<n;i++)
    {
        PrintVec(v[i]);
    }*/


    /*For Vector of Vector:Which is basically a 2D array of dynamic rows and columns
    syntax:vector<vector<int>> v*/
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i = 0; i < n; i++)
    {
        int N;
        cin>>N;
        vector<int> temp;//OR v.push_back(vector<int> ());
        for(int j = 0;j < N; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);//v[i].push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        PrintVec(v[i]);
    }
}