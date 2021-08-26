#include<iostream>
using namespace std;

#include<string>
#include<algorithm>

int main(){
    string s="53214";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
}