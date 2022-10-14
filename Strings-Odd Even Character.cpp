/*https://hack.codingblocks.com/app/contests/3416/457/problem*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
         if(i%2==0){
             s[i]=s[i]+1;
         }
         else{
             s[i]=s[i]-1;
         }
        cout<<s[i];
    }
return 0;
}
