/*https://hack.codingblocks.com/app/contests/3416/468/problem*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
   int ch=0;
   int count=1;
   for(int i=1;i<=s.length();i++){
       if(s[i]==s[ch]){
           count++;
       }
       else{
           if(count>1){
               cout<<s[ch]<<count;
           }
           else{
               cout<<s[ch];
           }
           ch=i;
           count=0;
           i--;
       }
   }
    return 0;
}
