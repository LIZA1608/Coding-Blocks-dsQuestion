/*https://hack.codingblocks.com/app/contests/3416/1369/problem*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int n=s.length();
	string ans="";
	int i=0;
	while(i<=n-1){
	ans+=s[i];
	int j=i+1;
	while(s[i]==s[j]){
		j++;
	}
	i=j;
	}
	cout<<ans;

}
