/*https://hack.codingblocks.com/app/contests/3416/61/problem*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int a[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		a[i]=arr[i];
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int k;
		cin>>k;
		for(int i=0;i<n;i++){
           int id=i-k;
           if(id<0){
               id+=n;
           }
           
           arr[i]=a[i]+a[id];
       }
       for(int i=0;i<n;i++){
           a[i]=arr[i];
       }
   }
   int sum=0;
   int c=pow(10,9)+7;
   for(int i=0;i<n;i++){
           sum=(sum+arr[i])%c;
       }
       
       cout<<sum<<endl;
  return 0;
}
