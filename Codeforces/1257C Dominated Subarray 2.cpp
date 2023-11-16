#include<iostream>
#include<map>
using namespace std;
#define inf 999999999
int main(){
 int ts;
 cin>>ts;
 while(ts--){
    int n;
    scanf("%d",&n);
    int ar[n+5];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    map<int,int> mp;
    int dis = inf;
    for(int i=0;i<n;i++){
        if(!mp.count(ar[i])){
            mp[ar[i]] = i;
        } else {
           int now = i-mp[ar[i]]+1;
           dis = min(now,dis);
           mp[ar[i]] = i;
        }
    }

    if(dis==inf) cout<<"-1"<<endl;
    else  cout<<dis<<endl;

 }




return 0;
}
