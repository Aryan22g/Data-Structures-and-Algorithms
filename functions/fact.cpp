#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    return factorial;

}
int main(){
    int n1, n2;
    cin>>n1>>n2;
    int fact1=1;
    cout<<fact(n1)<<" "<<fact(n2);
}