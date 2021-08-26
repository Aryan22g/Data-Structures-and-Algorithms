#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int nums[n+1];
    for(int i=0; i<n+1; i++)  cin>>nums[i];

    
    //bruteforceapproach

    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(nums[j]<nums[i]){
    //             int temp=nums[j];
    //             nums[j]=nums[i];
    //             nums[i]=temp;                
    //         }
    //     }
    // }

    // // for(int i=0;i<n; i++){
    // //     cout<<nums[i]<<" ";
    // // }

    // for(int i=0; i<=n-1; i++){
    //     if(nums[i]=nums[i+1]){
    //         cout<<nums[i]<<endl;
    //         break;
    //     }
    // }

    bool idx[n+1];

    for(int i=0; i<=n; i++){
        idx[i]=0;
    }
    for(int i=0; i<=n; i++){
        if(idx[i]==1){
            idx[nums[i]]=1;
        }
        else{
            cout<<nums[i];
        }
    }
}