/*https://hack.codingblocks.com/app/contests/3416/489/problem*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int l=0;
    int r=1;
    cout<<s[l];
    for(int i=0;i<n-1;i++){
        int k=s[r]-s[l];
        cout<<k;
        cout<<s[r];
        l=r;
        r=l+1;
    }
    return 0;
}
