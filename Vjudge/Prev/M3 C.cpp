#include<iostream>
using namespace std;
int main(){
 int tc;
 cin>>tc;
 while(tc--){
   int n;
   cin>>n;
   int ar[n+5];
   for(int i=1;i<=n;i++)
        scanf("%d",&ar[i]);

    long long cnt=0,sum=0,mul=0;

   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        sum=0;mul=1;
      for(int k=j;k<j+i;k++){
        sum+=ar[k];
        mul*=ar[k];
      }
      if(sum==mul) cnt++;
    }
   }

   cout<<cnt<<endl;





 }




return 0;
}
