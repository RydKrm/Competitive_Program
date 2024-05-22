#include<iostream>
#include<queue> 
#include<vector>
#include <utility>
using namespace std;

int main(){
  int test; cin>>test;
  
  for(int ts=1;ts<=test;ts++){
    int h,w;
    cin>>w>>h;
     string str[h+1];
     for(int i=0;i<h;i++) cin>>str[i];
     
     queue<pair<int,int>> que;
     int ans = 0;
     
     int ph=0, pw=0;
     
     for(int i=0;i<h;i++){
       for(int j=0;j<w;j++){
         if(str[i][j]=='@'){
           ph = i;
           pw = j;
           que.push(make_pair(ph,pw));
         }
       }
     }
     
    // cout<<"que => "<<ph<<" "<<pw<<endl;
     
     while(!que.empty()){
       
       int ch = que.front().first;
       int cw = que.front().second;
       
       ans++;
       
       if(ch>=0 && str[ch-1][cw]=='.'){
         que.push(make_pair(ch-1,cw));
       } 
       
       if(ch<h && str[ch+1][cw]=='.'){
         que.push(make_pair(ch+1,cw));
       }
       
       if(cw>=0 && str[ch][cw-1]=='.'){
         que.push(make_pair(ch,cw-1));
       } 
       
       if(cw<w && str[ch][cw+1]=='.'){
         que.push(make_pair(ch,cw+1));
       }
       
       que.pop();
       
     }
     
     cout<<"Case "<<ts<<": "<<ans<<endl;
    
  }
  return 0;
  
}