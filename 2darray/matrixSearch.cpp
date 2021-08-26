#include<iostream>
using namespace std;
// gven sorted matrix rowwise and colwise
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int target;
    cin>>target;
    bool check=false;
    // //brute force approach 
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         if(a[i][j]==target) check=true;
    //     }
    // }
    // if(check==true) cout<<"T";
    // else    cout<<"F";

    // optimized approach
    int r=0, c=m-1;
    while(r<n and c>=0){
        if(a[r][c]==target) check=true;
        if(a[r][c]>target)  c--;
        else r++;
    }
    if(check==true) cout<<"T";
    else    cout<<"F";

}