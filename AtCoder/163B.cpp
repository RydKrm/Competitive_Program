#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int p,n,m,a,sum=0;
 scanf("%d%d",&n,&m);
 for(int i=0;i<m;i++){
   cin>>p;
   sum +=p;
 }
  int ans = n-sum;
 if(ans<0) cout<<"-1"<<endl;
  else printf("%d\n",ans);
return 0;
}
