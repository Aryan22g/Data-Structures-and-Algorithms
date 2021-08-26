#include<iostream>
using namespace std;

int ascend(int n){
    if(n==0)    return 0;
    ascend(n-1);
    cout<<n<<" ";
}
int descend(int n){
    if(n==0)    return 0;
    cout<<n<<" ";
    descend(n-1);

}
int main(){
    int n;
    cin>>n;
    cout<<"Acending Order: "<<endl;
    ascend(n);
    cout<<"Descending order: "<<endl;
    descend(n);
}