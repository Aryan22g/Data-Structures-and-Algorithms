#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int orig_n=n;
    int ans=0;
    while(n>0){
        int lastDigit=n%10;
        ans+=pow(lastDigit,3);
        cout<<lastDigit<<" "<<ans<<endl;
        n=n/10;
    }
    cout<<ans<<" "<<orig_n;
    if(ans==orig_n){  cout<<"It is an armstrong number"<<endl;}
    else{  cout<<"It is not an armstrong number"<<endl;}

}