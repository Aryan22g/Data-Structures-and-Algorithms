#include<iostream>
using namespace std;
#include<climits>
// 7
//1 5 3 4 3 5 6
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //logic: O(n^2) ----->Not Acceptable
    // int minidx=INT_MAX;
    // int idx=0;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]==arr[j]){  idx=i;
    //         minidx=min(minidx,idx);}
    //     }
    // }
    // cout<<arr[minidx]<<endl;
    // return 0;
    //
    //logic: O(n) ----->Acceptable
    const int N = 1e6+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[arr[i]]!=-1){
            minidx=min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }

    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }

    //output pta nhi kyon nhi aaya
}