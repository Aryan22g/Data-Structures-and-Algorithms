/*
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
*/
#include<iostream>
using namespace std;
int fact(int a);

int main(){
    int n;
    cin>>n;    
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
        cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }

}

int fact(int a){
    int factorial=1;
    for(int i=2; i<=a; i++){
        factorial*=i;
    }
    return factorial;
}