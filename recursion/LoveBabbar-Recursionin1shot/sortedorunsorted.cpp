//ssome problem is there
#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> arr, int index)
{
    if (index == arr.size())
        return true;
    if (arr[index] < arr[index - 1])
        return false;
    return checkSorted(arr, index + 1);
}

int main()
{
    // int arr1[]={1,2,5,7,9};
    // int arr2[]={1,3,4,2,11};
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool ans = checkSorted(arr, 0);
    cout << ans << endl;
}