#include<iostream>
#include<math.h>
using namespace std;
int ar[10000],i,j,n,c,cnt=0,ar2[10001],m=0;
int main(){
 cin>>n>>c;
 for(i=4;i<=n;i+=2) ar[i] = 1;
 for(i=3;i<sqrt(n);i+=2){
    if(ar[i]==0){
        for(j=i*2;j<=n;j+=i)
            ar[j] = 1;
    }
 }
 ar[1] = 0;
 for(i=1;i<=n;i++){
    if(ar[i]==0){
       ar2[m] = i;
       m++;
       cnt++;
    }
 }

 cout<<n<<" "<<c<<": ";
 if(cnt%2==0) c = c*2;
 else c = c*2-1;
 int p = cnt/2-c/2;
 if(c>=cnt){
    for(i=0;i<cnt;i++){
        cout<<ar2[i]<<" ";
    }
    return 0;
 }
 for(i=0;i<c;i++){
      cout<<ar2[p]<<" ";
      p++;
    }
return 0;}
