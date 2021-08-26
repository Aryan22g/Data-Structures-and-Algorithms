#include<iostream>
using namespace std;
// nCr=fact(n)/fact(r)fact(n-r)
int fact(int a);

int main(){
    int n, r;
    cin>>n>>r;
    int ncr;
    ncr=fact(n)/(fact(n-r)*fact(r));
    cout<<ncr;

}

int fact(int a){
    int factorial=1;
    for(int i=2; i<=a; i++){
        factorial*=i;
    }
    return factorial;
}