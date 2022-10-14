
/*https://hack.codingblocks.com/app/contests/3416/549/problem*/


#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int maxi=0;
  int count=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
      count++;
    }
    else{
      maxi=max(maxi,count);
      count=0;
    }
  }
  maxi=max(maxi,count);
  cout<<maxi;
  return 0;
}
