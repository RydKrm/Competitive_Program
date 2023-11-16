#include<iostream>
#include<algorithm>
using namespace std;
int main(){

 int ar1[100000],ar2[100000],ar3[100000],i,n,ct=0,t,a,b;
 cin>>t;
 while(t--){
        a=0,ct=-1;
  cin>>n;
    for(i=0;i<n;i++)cin>>ar1[i];
    for(i=0;i<n;i++)cin>>ar2[i];

  for(i=0;i<n;i++){
    if(ar1[i]!=ar2[i]){
        if(ar1[i+1]==ar2[i+1]&&ar1[i+2]!=ar2[i+2]){
             cout<<"NO"<<endl;
            goto down;
        }
        ct++;
        ar3[ct] = ar2[i]-ar1[i]; //cout<<"  ct= "<<ar3[ct]<<endl;
       a=i;
        if(ar3[ct]<0){
            cout<<"NO"<<endl;
            goto down;
        }
    }
  }
   if(ct==-1){
  cout<<"YES"<<endl;
  goto down;
  }
  sort(ar3,ar3+ct+1); //cout<<"ar0 ="<<ar3[0]<<" ar,ct= "<<ar3[ct]<<" ct = "<<ct<<endl;
  if(ar3[0]==ar3[ct]){
    cout<<"YES"<<endl;
 } else {
     cout<<"NO"<<endl;
 }
   down:;
 }
return 0;
}
