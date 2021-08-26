#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    //brute force approach  O(n^3)
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==target)     cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }
}