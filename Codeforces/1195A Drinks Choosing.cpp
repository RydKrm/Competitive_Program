#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int ct1=0,ct2=0,sum=0,i,j,n,ar[1000],ar2[1000],p,k,a=0;
cin>>n>>k;
for(i=0;i<n;i++) cin>>ar[i];
sort(ar,ar+n);
for(i=1;i<=k;i++){
    for(j=0;j<n;j++){
     if(i==ar[j]){
        ct1++; //cout<<"ar[j] ="<<ct1<<endl;
     }
    }
    ar2[a]=ct1; //cout<<"ar2 = "<<ar2[a]<<endl;
    a++;
    ct1=0;
}
     for(i=0;i<a;i++){
        sum += ar2[i]/2;
        if(ar2[i]%2==a){
            ct2++;
        }
  }

    if(n%2==1) n++;
    p = n/2 - sum; //cout<<"p = "<<p<<endl;
    sum = sum*2+p;
    cout<<sum<<endl;

return 0;
}
