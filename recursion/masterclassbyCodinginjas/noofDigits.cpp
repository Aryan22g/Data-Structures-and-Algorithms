#include<iostream>
using namespace std;

int noOfDigit(int n){
    if(n==0)    return 0;
    //if(n<=9)  return 1;
    int smallans=noOfDigit(n/10);
    
    return smallans+1;
}

int main(){
    cout<<noOfDigit(532331);
}