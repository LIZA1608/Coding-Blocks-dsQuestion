
#include<iostream>
using namespace std;
int cnt=0;
bool rat(char maze[][1000],int sol[][1000],int i,int j,int n,int m)
{
    if(i==n && j==m)
    {
        cnt++;
        sol[n][m]=1;
            for(int i=0;i<=n;i++)
            {
                for(int j=0;j<=m;j++)
                cout<<sol[i][j]<<" ";

                cout<<endl;
            }
            cout<<endl;
        return true;
    }
    if(i>n||i<0||j>m ||j<0)
    return false;

    if(maze[i][j]=='X')
    return false;

    if(cnt>0)
    return false;

    sol[i][j]=1;
     bool rtsuccess=0;
      if(sol[i][j+1]==0)
     rtsuccess=rat(maze,sol,i,j+1,n,m);

     bool dnsuccess=0;
   if(sol[i+1][j]==0)
     dnsuccess=rat(maze,sol,i+1,j,n,m);

     bool upsuccess=0;
if(sol[i-1][j]==0)
     upsuccess=rat(maze,sol,i-1,j,n,m);
 
 bool ltsuccess=0;
 if(sol[i][j-1]==0)
     ltsuccess=rat(maze,sol,i,j-1,n,m);

    sol[i][j]=0;
    if(rtsuccess||dnsuccess||upsuccess||ltsuccess)
    return true;

    return false;

}
int main() {
    int n,m;
    cin>>n>>m;
    char maze[1000][1000];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>maze[i][j];
    }
    int sol[1000][1000]={0};
    bool ans=rat(maze,sol,0,0,n-1,m-1);
    if(!ans)
    cout<<"NO PATH FOUND";
    
    return 0;
}





