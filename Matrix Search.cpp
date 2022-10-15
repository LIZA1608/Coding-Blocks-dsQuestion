/*https://hack.codingblocks.com/app/contests/3416/501/problem*/



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x){
                c++;
            }
        }
    }
    if(c==0){
        cout<<0;
    }
    else{
        cout<<1;
    }
}
