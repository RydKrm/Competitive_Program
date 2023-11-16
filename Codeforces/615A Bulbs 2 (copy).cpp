#include<bits/stdc++.h>
using namespace std;

int main(){
   int a[105],n,m,t,i,j;
   // scanf("%d%d",&n,&m);
    cin>>n>>m;
    for(i=1;i<=n;++i){
       // scanf("%d",&t);
        cin>>t;
    while(t--)
       // scanf("%d",&j),
        cin>>j;
        a[j]=1;
        }
    for(i=1;i<=m;++i)
        if(!a[i])
           // printf("NO")
          cout<<"NO" ,exit(0);
          cout<<"YES";
   // printf("YES");}

   }
