/*https://hack.codingblocks.com/app/contests/3416/1003/problem*/

#include<bits/stdc++.h>
using namespace std;
int main() {
 int t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(a,a+n);
     int value;
     cin>>value;
     int diff=INT_MAX;
     int a1=0;
     int b=0;
     int i=0;
     int j=n-1;
     while(i<j){
          if(a[i]+a[j]==value){
              if(a[j]-a[i]<diff){
                  diff=a[j]-a[i];
                  a1=a[i];
                  b=a[j];
              }
              j--;
              i++;
          }
          else if(a[i]+a[j]>value){
              j--;
          }
          else{
              i++;
          }
     }
     cout<<"Deepak should buy roses whose prices are "<<a1<<" "<<"and"<<" "<<b<<".";
		cout<<endl;
 }
 return 0;
}
