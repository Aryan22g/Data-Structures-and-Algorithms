#include<iostream>
using namespace std;
// int expo(int n){
//     if(n==0)    return 1;
//     return 2*expo(n-1);
// }

// optimised
int expo(int n){
    if(n==0)    return 1;
    if(n%2==0){
        return expo(n/2)*expo(n/2);
    }
    else{
        return 2*expo(n/2)*expo(n/2);
    }

}
int main(){
    int n;
    cin>>n;

    cout<<expo(n)<<endl;

}