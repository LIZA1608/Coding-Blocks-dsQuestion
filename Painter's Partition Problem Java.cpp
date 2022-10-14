/*https://hack.codingblocks.com/app/contests/3416/1057/problem*/

#include <iostream>
using namespace std;
bool isPossible(int a[],int n,int k,int mid){
    int PainterCount=1;
    int BoardCount=0;
    for(int i=0;i<n;i++){
        if(BoardCount+a[i]<=mid){
            BoardCount+=a[i];
        }
        else{
            PainterCount++;
            if(PainterCount>k || a[i]>mid){
                return false;
            }
        BoardCount=a[i];
        }
    }
    return true;
}
int Painter(int a[],int n,int k){
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
            if(isPossible(a,n,k,mid)){
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

        int k,n;
        cin>>k>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<Painter(a,n,k)<<endl;
    return 0;
}
