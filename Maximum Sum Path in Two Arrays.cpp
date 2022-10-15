/*https://hack.codingblocks.com/app/contests/3416/552/problem*/

#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
           cin>>a[i];
		}
		for(int j=0;j<m;j++){
			cin>>b[j];
		}
		int sum1=0;
		int sum2=0;
		int i=0;
		int j=0;
		int ans=0;
		while(i<n && j<m){
			if(a[i]<b[j]){
				sum1+=a[i];
				i++;
			}
			else if(a[i]>b[j]){
				sum2+=b[j];
				j++;
			}
			else{
				ans+=max(sum1,sum2)+a[i];
				sum1=0;
				sum2=0;
				i++;
				j++;
			}
		}
		while(i<n){
			sum1+=a[i];
				i++;
		}
		while(j<m){
			sum2+=b[j];
				j++;
		}
		ans+=max(sum1,sum2);
		cout<<ans;
		cout<<endl;
	}
	return 0;
}
