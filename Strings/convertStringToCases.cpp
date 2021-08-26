#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str="aDgHvvJvjB";
    // cout<<'a'-'A'<<endl;         //to check the number difference

    //toupper
    for(int i=0; i<str.size(); i++){
        if(str[i]>='a' && str[i]<='z')  str[i]-=32;
    }
    cout<<str<<endl;
    //toLower
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z')  str[i]+=32;
    }
    cout<<str<<endl;

    //inbuilt function to do so
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;


    return 0;
    
}
