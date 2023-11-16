#include<iostream>
using namespace std;
int main(){
 long long int n,i,p,cnt=0;
 cin>>n;
 int ar[n+5];
 for(i=1;i<=n;i++) cin>>ar[i];
 ar[0] = 0;
 for(i=0;i<n;i++){
    p = ar[i+1]-ar[i];
    if(p<0) p*=-1;
    cnt+=p;
 }
 cout<<cnt<<endl;
return 0;
}
