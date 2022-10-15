/*https://hack.codingblocks.com/app/contests/3416/327/problem*/

#include<bits/stdc++.h>
using namespace std;
int maxWater(int a[],int n){
    int res=0;
    for(int i=1;i<n-1;i++){
        int left=a[i];
        for(int j=0;j<i;j++){
            left=max(left,a[j]);
        }
        int right=a[i];
        for(int j=i+1;j<n;j++ ){
            right=max(right,a[j]);
        }
        res=res+(min(left,right))-a[i];
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<maxWater(a,n);
        cout<<endl;
    }
    return 0;
}
