#include<iostream>
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
 int t;
  scanf("%d",&t);
  while(t--){
    long long int x,n,m,i,p=121212112,sum=0;
    scanf("%lld%lld%lld%",&x,&n,&m);
    if(m*10>=x){
     cout<<"YES"<<endl;
     continue;
    }
    for(i=0;i<n;i++){
      x = x/2+10;
         //cout<<"x "<<x<<endl;
       if(x>=p) break;
       if(x<1)break;
       p = x; //cout<<"p "<<p<<endl;
    }
    x = x-10*m;
    //cout<<"x2 "<<x<<endl;
    if(x<=0) printf("Yes\n");
    else printf("NO\n");
   }


return 0;
}

