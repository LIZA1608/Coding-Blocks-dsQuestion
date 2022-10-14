/*https://hack.codingblocks.com/app/contests/3416/503/problem*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[s.length()-i-1]){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}
