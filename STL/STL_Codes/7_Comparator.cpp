#include<bits/stdc++.h>
using namespace std;
bool should_i_swap(pair<int,int> a, pair<int,int> b){
    if(a.first!=b.first){
        if(a.first > b.first)return true;
        return false;
    }
    else
    {
        if(a.second < b.second)return true;
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    /*for(int i=0;i<n;i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(should_i_swap(arr[i], arr[j]))//basic bool function for swapping
            {
                swap(arr[i], arr[j]);
            }
        }
    }*/
    sort(arr.begin(), arr.end(),should_i_swap);//Sort function also takes a comparator function as input which says if u WANT TO SWAP GIMMME FALSE IF U DONT WANT TO SWAP GIMME TRUE
    //easier way is jo chahiye wahi return karo
    for(int i = 0; i < n; i++)
    {
        cout << arr[i].first << " "<< arr[i].second << endl;
    }
    cout<<endl;
}