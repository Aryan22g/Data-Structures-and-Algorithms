#include<bits/stdc++.h>
using namespace std;

int reverseArray(vector<int> arr, int index){
    if(index==arr.size())    return arr[index];
    int temp = arr[arr.size()-index-1];
    arr[arr.size()-index-1]=arr[index];
    arr[index]=temp;
    return reverseArray(arr, index+1);
}
int main(){
    // 5,4,3,2,1--->1,2,3,4,5
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<reverseArray(arr,0);

    return 0;
}