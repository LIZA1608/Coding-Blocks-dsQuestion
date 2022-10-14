/*https://hack.codingblocks.com/app/contests/3416/1056/problem*/

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int a[],int n,int k,int mid){
    int CowCount =1;
    int LastPos=a[0];
    for(int i=0;i<n;i++){
        if(a[i]-LastPos>=mid){
            CowCount++;
            if(CowCount==k){
                return true;
            }
            LastPos=a[i];
        }
    }
    return false;
}
int aggersivecows(int a[],int n,int k){
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }
    int e=maxi;
    int ans=1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(a,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<aggersivecows(a,n,k);
    return 0;
}
