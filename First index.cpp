/*https://hack.codingblocks.com/app/contests/3416/526/problem*/


#include<bits/stdc++.h>
using namespace std;

  int main(){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      int k;
      cin>>k;
      int c=0;
      for(int i=0;i<n;i++){
          if(a[i]==k){
              cout<<i;
              c++;
              break;
          }
      }
      if(c==0){
          cout<<"-1";
      }
return 0;
}
