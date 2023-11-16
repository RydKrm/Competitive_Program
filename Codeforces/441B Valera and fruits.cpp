#include<iostream>
using namespace std;
int main(){
 int n,v,sum=0,k,p,s,i;
 cin>>n>>v;
 int ar[n+5];
 for(i=0;i<n;i++){
   cin>>p>>k;
   ar[p] = k;
 }
 if(ar[1]>=v){
  sum+=v;
  ar[1]=ar[1]-v;
 } else {
   sum+=ar[1];
   ar[1]=0;
 }
cout<<"sum 1 "<<sum<<endl;

 for(i=2;i<=n;i++){
   if((ar[i-1]-v)<0){
    sum+=ar[i-1]+(v-ar[i-1]); cout<<"sum 2 "<<sum<<endl;
    ar[i] = ar[i]-(v-ar[i-1]);
   } else {
    sum+=ar[i-1];   cout<<"sum 3 "<<sum<<endl;
   }
 }
 //sum+=ar[i-1];

 cout<<sum<<endl;

return 0;
}
