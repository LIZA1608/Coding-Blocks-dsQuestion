/*https://hack.codingblocks.com/app/contests/3416/1089/problem*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int c1,c2,c3,c4;
		cin>>c1>>c2>>c3>>c4;
		int rickshaw;
		int cab;
		cin>>rickshaw>>cab;
		int cabs[cab];
		int rick[rickshaw];
		for(int i=0;i<rickshaw;i++){
             cin>>rick[i];
		}
		for(int i=0;i<cab;i++){
			cin>>cabs[i];
		}

		int cost2=0;
		int cost3=0;
		
		int ans;

		for(int i=0;i<rickshaw;i++){
			cost2+=min(rick[i]*c1,c2);
		}

		cost3+=min(cost2,c3);
        cost2=0;
		for(int i=0;i<cab;i++){
			cost2+=min(cabs[i]*c1,c2);
		}
		cost3+=min(cost2,c3);

		ans=min(cost3,c4);

		cout<<ans<<endl;

	}
	return 0;
}
