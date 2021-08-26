#include<iostream>
#include<climits>
using namespace std;

int maximum(int a, int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int n, extra;
    cin>>n>>extra;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        max=maximum(max,arr[i]);
    }
    bool new_arr[n];
    for(int i=0; i<n; i++){
        if((arr[i]+extra)>=max) new_arr[i]=true;
        else    new_arr[i]=false;
    }
    for(int i=0; i<n; i++){
        cout<<new_arr[i];
    }
}