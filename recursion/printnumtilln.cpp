#include<iostream>
using namespace std;
//dec order
int dec(int n){
    if(n==1) {
        cout<<"1"<<endl; 
        return;
        }
    cout<<n<<endl;
    dec(n-1);
}
//inc order
int inc(int n){
    if(n==1) {
        cout<<"1"<<endl; 
        return;
        }
    inc(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;


    inc(n);dec(n)  ;

}