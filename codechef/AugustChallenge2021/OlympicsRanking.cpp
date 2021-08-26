// g1, s1, b1
// g2, s2, b2

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T>0){
        int g1,s1,b1,g2,s2,b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        int sum1, sum2;
        sum1=g1+s1+b1;
        sum2=g2+s2+b2;
        if(sum1>sum2)   cout<<"1"<<endl;
        else    cout<<"2"<<endl;

        T--;
    }
}