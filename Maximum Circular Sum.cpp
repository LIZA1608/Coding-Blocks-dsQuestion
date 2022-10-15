/*https://hack.codingblocks.com/app/contests/3416/1077/problem*/

#include <bits/stdc++.h>
using namespace std;
int kadane(int a[],int n){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        if(currsum>maxsum){
            maxsum=currsum;
        }
    }
    return maxsum;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,total=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            total+=a[i];
        }
        int res1=kadane(a,n);
         for(int i=0;i<n;i++){
             a[i]=a[i]*(-1);
         }
         int res=kadane(a,n);
         int res2=total-(-res);
         int ans;
         ans=max(res1,res2);
         cout<<ans<<endl;
    }
    return 0;
}
