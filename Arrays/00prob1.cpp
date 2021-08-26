#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    // //brute force approach  O(n^2)
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]+arr[j]==sum)  cout<<i<<" "<<j<<endl;            
    //     }
    // }

    //using sort  + 2 pointer approach   O(n)
    // int s=0, e=n-1;
    // while(s<e){
    // int su=arr[s]+arr[e];
    // // cout<<su<<endl;
    // if(su==sum)  cout<<s<<" "<<e<<endl;
    // else if(su<sum)  s++;
    // else    e--;       
    // } 

    
}