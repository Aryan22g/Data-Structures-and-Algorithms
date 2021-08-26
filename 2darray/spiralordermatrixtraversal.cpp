#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    int rowStart=0;
    int colStart=0;
    int rowEnd=n-1;
    int colEnd=m-1;

    while(rowStart<=rowEnd && colStart<=colEnd){
        //for row_start
        for(int col=colStart; col<=colEnd; col++){
            cout<<a[rowStart][col]<<" ";
        }
        rowStart++;

        //for colend
        for(int row=rowStart; row<=rowEnd; row++){
            cout<<a[row][colEnd]<<" ";
        }
        colEnd--;

        //for(rowend)
        for(int col= colEnd; col>=colStart; col--){
            cout<<a[rowEnd][col]<<" ";
        }
        rowEnd--;

        //for colstart
        for(int row=rowEnd; row>=rowStart; row--){
            cout<<a[row][colStart]<<" ";
        }
        colStart++;
    }

}