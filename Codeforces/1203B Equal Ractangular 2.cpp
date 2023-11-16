#include<iostream>
#include<algorithm>
#include<map>
using ll = long long ;
using namespace std;
int main(){
 int tc;
 cin>>tc;
 while(tc--){
    map<int,int>mp;
    int n,mn=9999999,mx=0,j;
    ll mul;
    cin>>n;
    int ar[520];
    int m = 4*n;
    for(int i=0;i<m;i++){
        scanf("%d",&ar[i]);
        mn = min(mn,ar[i]);
        mx = max(mx,ar[i]);
        mp[ar[i]]++;
    }

   for(auto x:mp){
    if(x.second%2){
        printf("NO\n");
        goto down;
    }
   }

     mul = mn*mx;
    for(int i=0;i<m;i++){
      if(ar[i]==0) continue;
        for(j=0;j<m;j++){
            if(ar[i]*ar[j]==mul){
                ar[i] = 0;
                ar[j] = 0;
                break;
            }
        }
        if(j==m){
            printf("NO\n");
            goto down;
        }
    }
      printf("YES\n");
    down:;

 }




return 0;
}
