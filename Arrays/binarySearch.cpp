#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key)    return mid;
        else if(arr[mid]>=key)   e=mid-1;
        else    s=mid+1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    int ans=0;
    ans=binarySearch(arr,n,key);
    cout<<ans;
}
// for practice 
// int binarySearch(int arr[], int n, int key){
//     //array element smust be sorted 
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key)   return mid;
//         else if(arr[mid]>key)   e=mid-1;
//         else    s=mid+1;
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0; i<n; i++) cin>>arr[i];
//     int key;
//     cin>>key;

//     cout<<binarySearch(arr,n, key);
// }