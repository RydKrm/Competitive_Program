#include<bits/stdc++.h>
using namespace std;
int ar[3001];
int main(){
    int b,c,d=0,i,n,m,s=0;
    cin>>n>>m;
    for(i=0; i<n; i++){
       cin>>b>>c;
        ar[b]=ar[b]+c;
    }

   b=0;
   for(i=1; i<=3001; i++){
     if(i<=3000) c=ar[i];
     else c=0;
     if(s>m){
      d=d+m;
      s=c;
     }
     else if((s+c)>m){
     d+=m;
     s+=c-m;
     }
     else{
     d=d+s+c;
     s=0;
     }
    }
    cout<<d<<endl;
return 0;
}
