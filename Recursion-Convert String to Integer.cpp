
#include<iostream>
using namespace std;

int convert(string str,int s,long &c){
	if(str[s]=='\0'){
		return 0;
	}
	int a=str[s]-'0';
	int d=convert(str,s+1,c);
	a=a*c+d;
	c*=10;
	return a;
}
int main(){
	string s;
	cin>>s;
	long c=1;
	cout<<convert(s,0,c);
	return 0;
}
