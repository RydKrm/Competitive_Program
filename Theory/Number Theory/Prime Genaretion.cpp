#include<iostream>
#include<math.h>
using namespace std;
int ar[1000100],i,j,n,sqt=0;
int main(){
 cout<<"Enter the number "<<endl;
 cin>>n;
 for(i=4;i<=n;i+=2) ar[i] = 1;
 for(i=3;i<sqrt(n);i+=2){
    if(ar[i]==0){
        for(j=i*2;j<=n;j+=i)
            ar[j] = 1;
    }
 }
 ar[1] = 1;

for(i=1;i<=n;i++){
    if(ar[i]==0) cout<<i<<" Prime"<<endl;
    else cout <<i<<" not Prime"<<endl;
}
return 0;
}
