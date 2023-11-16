#include<iostream>
#include<queue>
#define inf 9999999
using namespace std;
int main(){
int i,j,n,m,p,q,r;
 cout<<"Enter the number of node "<<endl;
 cin>>n;
 int ar[n][n];
 for(i=0;i<=n;i++){
  for(j=0;j<=n;j++){
     ar[i][j]=inf;
   }
}

 cout<<"Enter the number of edges you want and weight"<<endl;
 cin>>m;
 for(i=1;i<=m;i++){
  cin>>p>>q>>r;
  ar[p][q] = r;
  //ar[q][p] = 1;
 }

 cout<<"Matrix is - "<<endl;
 for(i=1;i<=n;i++){
  for(j=1;j<=n;j++){
  if(ar[i][j]==inf){
   cout<<"inf"<<" ";
   continue;
   }
    cout<<" "<<ar[i][j]<<" ";
  }
  cout<<endl;
 }
 int level[n],src,u,v,dis2[n];
 for(i=1;i<=n;i++) level[i] = inf;
 queue<int> que;
 cout<<"Enter the source node "<<endl;
 cin>>src;
 que.push(src);
 level[src] = 0;
 while(!que.empty()){
   u = que.front();
   que.pop();
   for(v=1;v<=n;v++){
      if((level[u]+ar[u][v])<level[v]){
       dis2[v] = level[u];
       level[v] = level[u]+ar[u][v];
       que.push(v);
      }
   }
 }

for(i=1;i<=n;i++){
  cout<<i<<" distance form source ";
  if(level[i]==inf){
  cout<<" inf "<<endl;
  continue;
   }
  cout<<level[i]<<endl;
  }

for(i=1;i<=n;i++){
  cout<<i<<" 2nd distance form source ";
  if(dis2[i]==inf){
  cout<<" inf "<<endl;
  continue;
   }
  cout<<dis2[i]<<endl;
  }

return 0;
}
