#include<iostream>
#include<cmath>
using namespace std;

int max(int a, int b, int c){
    if(a>b){
        if(a>c) return a;
        else    return c;
    }
    else return b;
}
void check(int a, int b, int c){
    int x=max(a,b,c);
    int y,z;
    if(x==a){
        y=b;
        z=c;
    }
    else if(x==b){
        y=a;
        z=c;
    }
    else{
        y=a;
        z=b;
    }
    if(pow(x,2)==pow(y,2)+pow(z,2)) cout<<"Yes";
    else    cout<<"No";
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    check(a,b,c);
}