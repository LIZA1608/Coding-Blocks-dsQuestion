/*https://hack.codingblocks.com/app/contests/3416/1094/problem*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int t;
	cin>>t;
	while(t--){
		int money;
		cin>>money;
		int count;
		cin>>count;
		int val=0;
		for(int i=0;i<n;i++){
               if(money%arr[i]==0){
				   val++;
			   }
		}
		if(val>=count){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	
	return 0;
}
