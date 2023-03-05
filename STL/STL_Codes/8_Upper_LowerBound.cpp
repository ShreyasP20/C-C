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
    sort(arr, arr + n);
    cout<<endl;
    int *ptr=lower_bound(arr, arr + n, 5);//Given array is 4 5 5 25 7 8 gives output as 5
    cout << *ptr << endl;
    ptr=upper_bound(arr, arr + n, 5);
    cout << *ptr << endl;
}
/*Lower Bound -Finds the number if not present then returns the next greater number; if next greater element is not present then garbage address is returned
  Upper Bound -Finds the upper number   Time Complexity is log(n)
  for sets and maps the lower_bound is O(n)
  FOr sets use : auto it = s.lower_bound(rand());*/