/*https://hack.codingblocks.com/app/contests/3416/991/problem*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
   
   int dir=0;
   int top=0;
   int down=n-1;
   int left=0;
   int right=m-1;
   while(top<=down && left<=right){
       if(dir==0){
           for(int i=left;i<=right;i++){
               cout<<a[top][i]<<", ";
           }
           top++;
       }
       if(dir==1){
           for(int i=top;i<=down;i++){
               cout<<a[i][right]<<", ";
           }
           right--;
       }
       if(dir ==2){
           for(int i=right;i>=left;i--){
               cout<<a[down][i]<<", ";
           }
           down--;
       }
       if(dir ==3){
           for(int i=down;i>=top;i--){
               cout<<a[i][left]<<", ";
           }
           left++;
       }
       dir=(dir+1)%4;
   }
   cout<<"END";
  	return 0;
}
