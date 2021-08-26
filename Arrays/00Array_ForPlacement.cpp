// resource :  cplusplus.com
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    if(v.empty())   cout<<"Empty"<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // for(int i=0; i<v.size(); i++){
    //     v.push_back(v[i]);  //INF loop (TLE or MLE error)
    // }
    int siz=v.size();
    for(int i=0; i<siz; i++){
         v.push_back(v[i]);     
    }
    // v.push_back(4);
    // v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    return 0;
}