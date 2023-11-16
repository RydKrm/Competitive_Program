#include<iostream>
#include<queue>
using namespace std;
int main(){
int i,j,n,m,p,q;
 cout<<"Enter the number of node "<<endl;
 cin>>n;
 int ar[n][n];
 for(i=0;i<=n;i++){
  for(j=0;j<=n;j++){
     ar[i][j]=0;
   }
}

 cout<<"Enter the number of edges you want "<<endl;
 cin>>m;
 for(i=1;i<=m;i++){
  cin>>p>>q;
  ar[p][q] = 1;
  ar[q][p] = 1;
 }

 cout<<"Matrix is - "<<endl;
 for(i=1;i<=n;i++){
  for(j=1;j<=n;j++){
    cout<<ar[i][j]<<" ";
  }
  cout<<endl;
 }
 int level[n],src,u,v;
 for(i=1;i<=n;i++) level[i] = -1;
 queue<int> que;
 cout<<"Enter the source node "<<endl;
 cin>>src;
 que.push(src);
 level[src] = 0;
 while(!que.empty()){
   u = que.front();
   que.pop();
   for(v=1;v<=n;v++){
      if(level[v]==-1&&ar[u][v]==1){
       level[v] = level[u]+1;
       que.push(v);
      }
   }
 }

for(i=1;i<=n;i++)
  cout<<i<<" distance form source "<<level[i]<<endl;

return 0;
}
