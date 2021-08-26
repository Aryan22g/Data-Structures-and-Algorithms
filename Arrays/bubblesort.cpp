#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)  cin>>arr[i];
    for(int j=0; j<n-1; j++){
        for(int i=1; i<n; i++){
            if(arr[i]<arr[i-1]){
                int temp=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=temp;
            }
        }
    }
// using while same as using for loop
    // int counter=1;
    // while(counter<n-1){
    //             for(int i=1; i<n; i++){
    //         if(arr[i]<arr[i-1]){
    //             int temp=arr[i-1];
    //             arr[i-1]=arr[i];
    //             arr[i]=temp;
    //         }
    //     }
    // }

    for(int i=0; i<n; i++)  cout<<arr[i];
}