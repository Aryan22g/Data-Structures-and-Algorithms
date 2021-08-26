#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool check=true;
    // for(int i=0; i<n/2; i++){
    //     if(a[i]==a[n-1-i]){
    //         check=true;
    //         continue;
    //     }
    //     else break;  
    // }
    for(int i=0; i<n/2; i++){
        if(a[i]!=a[n-1-i]){
            check=false;
            break;  
        }
    }
    if(check==true)   cout<<"palindrome hai"<<endl;
    else    cout<<"Palindrome nahi h"<<endl;
}