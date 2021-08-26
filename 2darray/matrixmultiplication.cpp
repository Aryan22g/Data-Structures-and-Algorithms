// #include<iostream>
// using namespace std;

// int main(){
//     int n1,n2;
//     cin >>n1>>n2;
//     int a1[n1][n2];
//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n2; j++){
//             cin>>a1[i][j];
//         }
//     }
//     int n3,n4;
//     cin >>n3>>n4;
//     int a2[n3][n4];
//     for(int i=0; i<n3; i++){
//         for(int j=0; j<n4; j++){
//             cin>>a2[i][j];
//         }
//     }


//     if(n2==n3){
//         int newarr[n1][n4];
//         for(int i=0; i<n1; i++){
//             for(int j=0; j<n4; j++){
//                 cin>>newarr[i][j];
//             }
//         }
//         for(int i=0; i<n1; i++){
//             for(int j=0; j<n4; j++){
//                 for(int k=0;k<n2; k++){
//                 newarr[i][j]+=a1[i][k]*a2[k][j];
//                 }
//             }
//         }
//         for(int i=0; i<n1; i++){
//             for(int j=0; j<n4; j++){
//                 cout<<newarr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     }
//     else cout<<"Multiplication not possible since n2!=n3";

// }

// //apna college ans
// #include<iostream>
// using namespace std;

// int main(){
//     int n1, n2, n3;
//     cin>>n1>>n2>>n3;
//     int m1[n1][n2];
//     int m2[n2][n3];
//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n2; j++)
//         cin>>m1[i][j];
//     }
//     for(int i=0; i<n2; i++){
//         for(int j=0; j<n3; j++)
//         cin>>m2[i][j];
//     }
//     int ans[n1][n3];
//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//             ans[i][j]=0;
//         }
//     }

//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//             for(int k=0; k<n2; k++){
//                 ans[i][j]+=m1[i][k]*m2[k][j];
//             }
//         }
//     }
//      for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }