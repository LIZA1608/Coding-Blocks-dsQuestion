/*https://hack.codingblocks.com/app/contests/3416/1493/problem*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n;
    int a[n];
    int p=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        p=p*a[i];
    }
    for(int i=0;i<n;i++){
       a[i]=p/a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
  	return 0;
}
