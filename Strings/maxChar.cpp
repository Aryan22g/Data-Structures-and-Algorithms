#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    string s="abcacbade";

//bruteforceapproach;
    // int maxNum=INT_MIN;
    // for(int i=0; i<s.length(); i++){
    //     int count=0;
    //     for(int j=i; j<s.length(); j++){
    //         if(s[i]==s[j]){
    //             count++;   
    //         }
    //         maxNum=max(count, maxNum);
    //     }
    // }
    // cout<<maxNum;

//optimised approach
    int freq[26];
    for(int i=0; i<26; i++) freq[i]=0;
    for(int i=0; i<s.length(); i++)
        freq[s[i]-'a']++;
    int maxNum=INT_MIN;
    char ans='a';
    for(int i=0; i<26; i++) {
        if(freq[i]>maxNum)  {
            maxNum=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxNum<<" "<<ans<<endl;
    


}