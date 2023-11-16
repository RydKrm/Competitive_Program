#include<iostream>
#include<map>
using namespace std;
int main(){
 int tc;
 cin>>tc;
 while(tc--){
   int n;
   cin>>n;
   map<int,int>mp;
   for(int i=1;i<=4*n;i++){
    int p;
    scanf("%d",&p);
    mp[p]++;
   }

   for(auto x:mp){
     if(x.second%2) {
        printf("NO\n");
        goto down;
     }
   }



   down:;
 }




return 0;
}
