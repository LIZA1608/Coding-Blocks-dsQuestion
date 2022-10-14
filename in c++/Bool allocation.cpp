/*https://hack.codingblocks.com/app/contests/3416/1365/problem*/

#include <iostream>
using namespace std;
bool isPossible(int a[],int n,int m,int mid){
    int StudentCount=1;
    int PageCount=0;
    for(int i=0;i<n;i++){
        if(PageCount+a[i]<=mid){
            PageCount+=a[i];
        }
        else{
            StudentCount++;
            if(StudentCount>m || a[i]>mid){
                return false;
            }
        PageCount=a[i];
        }
    }
    return true;
}
int AllocateBooks(int a[],int n,int m){
    int total=0;
    for(int i=0;i<n;i++){
        total+=a[i];
    }
    int start=0;
    int end=total;
    int mid=start+(end-start)/2;
    int ans =-1;
    while(start<=end){
        for(int i=0;i<n;i++){
            if(isPossible(a,n,m,mid)){
                ans =mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int  n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<AllocateBooks(a,n,m)<<endl;
    }
    return 0;
}
