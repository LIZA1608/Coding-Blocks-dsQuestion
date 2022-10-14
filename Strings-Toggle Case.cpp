/*https://hack.codingblocks.com/app/contests/3416/445/problem*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>=60 && s[i]<=90){
           s[i]=s[i]+32;
        }
        else{
            s[i]=s[i]-32;
        }
        cout<<s[i];
    }
return 0;
}
