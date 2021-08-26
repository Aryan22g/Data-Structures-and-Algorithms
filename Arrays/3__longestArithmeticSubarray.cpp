//GoogleKickstart
#include<iostream>
#include<climits>
using namespace std;
// 7
// 10 7 4 6 8 10 11
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //logic
    int ans=2;
    int pd=arr[1]-arr[0];
    int  j=2;
    int curr=2;
    while(j<n){
        if(pd==arr[j]-arr[j-1]) curr++;
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;

    //






    // //mytry
    //     int diffarr[n-1];
    // for(int i=0; i<n-1; i++){
    //     diffarr[i]=arr[i+1]-arr[i];
    // }

    // for(int i=0; i<n-1; i++)  cout<<diffarr[i]<<" ";
}