#include<bits/stdc++.h>
using namespace std;

void printSubset(vector<int> input, vector<int> output, int index){
    if(index>=input.size()){
        for(auto i : output){
            cout<<i<<" ";
        }
        cout<<endl;
        return ;
    }

    //nahi lena h
    printSubset(input,output, index+1);

    //lena hai
    output.push_back(input[index]);
    printSubset(input, output, index+1);
}

int main(){
    int size;
    cin>>size;
    vector<int> input(size);
    vector<int> output(size);   //yahha thoda error h
    for(int i=0; i<size; i++){
        cin>>input[i];
    }

    printSubset(input, output, 0);

    

}