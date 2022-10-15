/*https://hack.codingblocks.com/app/contests/3416/543/problem*/

#include<iostream>
using namespace std;
void generateParenthesis(int open,int close,int n,int i,char *output){
	// base case
	if(i==2*n){
		output[i]='\0';
        cout<<output<<endl;
		return;
	}
	// recursive case
	if(open<n){
		output[i]='(';
        generateParenthesis(open+1,close,n,i+1,output);
	}
	if(close<open){
		output[i]=')';
        generateParenthesis(open,close+1,n,i+1,output);
	}
}
int main() {
	int n;cin>>n;
	char output[100];
	generateParenthesis(0,0,n,0,output);
	return 0;
}
