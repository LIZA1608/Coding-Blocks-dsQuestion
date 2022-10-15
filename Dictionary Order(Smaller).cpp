/*https://hack.codingblocks.com/app/contests/3416/1063/problem*/

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void permute(string str,string inp,string out){
    if(inp.size()==0){
            if(out<str){
                cout<<out<<endl;
            }
            return;
    }
    for(int i=0;i<inp.size();i++){
        string ros=inp.substr(0,i)+inp.substr(i+1);
         permute(str,ros,out+inp[i]);
    }
   
}
int main()
{
	string s;
    cin>>s;
    string temp;
    temp=s;
    sort(temp.begin(),temp.end());
    permute(s,temp,"");
	return 0;
}
