#include<iostream>
#include<math.h>
using namespace std;
int ar[110000],i,j,n,sqt=0;
int main(){
 cin>>n;
 for(i=4;i<=110000;i+=2) ar[i] = 1;
 for(i=3;i<sqrt(110000);i+=2){
    if(ar[i]==0){
        for(j=i*2;j<=110000;j+=i)
            ar[j] = 1;
    }
 }
 ar[1] = 1;
 for(int i=1;i<=n;i++) cout<<" "<<ar[i];cout<<endl;


 int cnt = 0;
  for(i=2;i<=110000;i++){
    if(ar[i]==0){
    cout<<i<<endl;
    cnt++;
    }
    if(cnt==n) break;
}
return 0;
}
