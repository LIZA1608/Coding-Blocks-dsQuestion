/*https://hack.codingblocks.com/app/contests/3416/1086/problem*/

#include<bits/stdc++.h>
using namespace std;
bool sorter(string a,string b){
	return a+b>b+a;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n,sorter);
		for(int i=0;i<n;i++){
			cout<<s[i];
		}
		cout<<endl;
	}

	return 0;
}
