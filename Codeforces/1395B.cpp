#include<iostream>
#include<vector>
using namespace std;

int visited[120][120];

int main(){
  int n,m,sx,sy;
  cin>>n>>m>>sx>>sy;
  int ans[n*m][2],sz=0;


  while(sx--){
    if(visited[sx][sy]==0){
        ans[sz][0] = sx+1;
        ans[sz][1] = sy+1;
        sz++;
        visited[sx][sy] = 1;
    }
  }

   while(sy--){
    if(visited[sx][sy]==0){
        ans[sz][0] = sx+1;
        ans[sz][1] = sy+1;
        sz++;
         visited[sx][sy] = 1;
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(visited[i][j]==0){
            visited[i][j] = 1;
            ans[sz][0] = i+1;
            ans[sz][1] = j+1;
            sz++;
        }
     }
  }

 for(int i=0;i<sz;i++){
    cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
 }

 return 0;
}
