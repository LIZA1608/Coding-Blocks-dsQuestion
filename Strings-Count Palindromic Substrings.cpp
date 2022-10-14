/*https://hack.codingblocks.com/app/contests/3416/1060*/


#include<bits/stdc++.h>
using namespace std;
bool isPallindrome(string s,int i,int j){
    if(i>j){
        return 1;
    }
    if(s[i]!=s[j]){
        return 0;
    }
    return isPallindrome(s,i+1,j-1);
}
int main() {
 string s;
 cin>>s;
 int n=s.length();
 int count =0;
 for(int i=0;i<n;i++){
     for(int j=i;j<n;j++){
         if(isPallindrome(s,i,j)){
             count++;
         }
     }
 }
 cout<<count;
return 0;
}
