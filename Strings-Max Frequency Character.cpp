/*https://hack.codingblocks.com/app/contests/3416/558/problem*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int maxi=0;
    sort(s.begin(),s.end());
    int c=1;
    int n=s.length();
    char ans;
    for(int i=1;i<=n;i++){
        if(i==n||s[i]!=s[i+1]){
            if(maxi<c){
                maxi=c;
                ans=s[i-1];
            }
            c=1;
        }
        else{
            c++;
        }
    }
    cout<<ans;
    return 0;
}
