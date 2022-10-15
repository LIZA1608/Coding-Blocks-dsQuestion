/*https://hack.codingblocks.com/app/contests/3416/394/problem*/

#include<bits/stdc++.h>
using namespace std;
string arr[1000000];
int num=0;

void getper(string str,string out){
    if(str.length()==0){
        arr[num++]=out;
        return;
    }
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        string leftPart=str.substr(0,i);
        string rightpart=str.substr(i+1,str.length());
        string ros=leftPart+rightpart;
        getper(ros,out+ch);
    }
}
  int main(){
      string str;
      cin>>str;
  getper(str,"");
  sort(arr,arr+num);
  for(int i=0;i<num;i++){
      if(arr[i]>str){
          cout<<arr[i]<<endl;
      }
  }
return 0;
}
