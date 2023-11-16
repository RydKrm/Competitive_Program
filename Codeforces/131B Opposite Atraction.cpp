#include<iostream>
using namespace std;
long long int ar[100];
int main(){
 long long int i,n,cnt=0,p,m;
 cin>>m;
 for(i=0;i<m;i++){
   cin>>n;
   if(n<0){
     p=10+n-2*n; ///cout<<"p = "<<p<<endl;
     ar[p]++;
   } else ar[n]++;
 }
 ///for(i=0;i<21;i++) cout<<ar[i]<<" ";
 cnt+=(ar[0]*(ar[0]-1))/2; ///cout<<"cnt 0 ="<<cnt<<endl;
 for(i=1;i<11;i++){
   cnt+=ar[i]*ar[i+10];
 }
 cout<<cnt<<endl;
return 0;
}
