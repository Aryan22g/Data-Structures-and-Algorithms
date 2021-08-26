//google amazon visa fb
#include<iostream>
using namespace std;

int main(){
    int n,S;
    cin>>n>>S;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    /*1 unsorted array
    2 */
    //logic: O(n^2)-------->BruteForceApproach
    // int sum=0;
    // for(int i=0; i<n; i++){
    //     sum=a[i];
    //     for(int j=i+1; j<n; j++){
    //         sum+=a[j];
    //         if(sum==S){
    //             cout<<i<<" "<<j<<endl;
    //             break;
    //         }
    //     }
    // }
    //
    //logic: optimized approach
    int i=0, j=0, st=-1, en=-1, sum=0;
    while(j<n && sum+a[j]<=S){
        sum+=a[j];
        j++;
    }
    if(sum==S){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        sum+=a[j];
        while(sum>S){
            sum-=a[i];
            i++;
        }
        if(sum==S){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }

    cout<<st<<" "<<en<<endl;
    //
}