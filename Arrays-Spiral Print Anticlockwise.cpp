/*https://hack.codingblocks.com/app/contests/3416/411/problem*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n;
    int a[n][n],b[n][n];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
    }
    int dir =0;
    int top=0;
    int down=n-1;
    int left=0;
    int right=n-1;
   while(top<=down && left<=right){
       for(int i=top;i<=down;i++){
           cout<<a[i][left]<<",";
       }
       left++;
       for(int j=left;j<=right;j++){
           cout<<a[down][j]<<",";
       }
       down--;
       for(int i=down;i>=top;i--){
           cout<<a[i][right]<<",";
       }
       right--;
       for(int j=right;j>=left;j--){
           cout<<a[top][j]<<",";
       }
       top++;
   }
    cout<<"END";
    return 0;
}
