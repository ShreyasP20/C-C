#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);//array name is a pointer to the first element of the array so ....it takes first address and the address the last element +1
    //sort takes two inputs the starting index and the ending index to sort in the array
    //intro sort is used by stl sort function::BASICALLY MIXTURE OF QUICK SORT HEAP SORT INSERTION SORT 
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}