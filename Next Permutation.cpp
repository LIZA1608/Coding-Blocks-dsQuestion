#include<bits/stdc++.h>
using namespace std;
vector<int>nextPermutation(int n,vector<int>arr){
	int index=-1;
	for(int i=0;i<n-1;i++){
		if(arr[i+1]>arr[i]){
			index=max(index,i);
		}
	}
	if(index==-1){
		sort(arr.begin(),arr.end());
		return arr;
	}
	int l=-1;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[index]){
			l=max(l,i);
		}
	}
	swap(arr[l],arr[index]);
	sort(arr.begin()+index+1,arr.end());
	return arr;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		vector<int>ans=nextPermutation(n,arr);
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
