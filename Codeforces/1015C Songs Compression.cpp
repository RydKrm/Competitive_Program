#include<iostream>
#include<algorithm>
using namespace std;
int main(){

 int ar[100000][2],ar2[100000],p=0,i,j,m,n,ct=0;
 long long sub=0,sum2=0,sum=0;
 cin>>n>>m;

 for(i=0;i<n;i++){
    cin>>ar[i][0];
    sum += ar[i][0];
    cin>>ar[i][1];
    sum2 += ar[i][1];
 }
 if(sum2>m){
    cout<<"-1"<<endl;
 } else {
  sub = sum-m;   //cout<<"sub = "<<sub<<endl;
 for(i=0;i<n;i++){
     ar2[i] = ar[i][0]-ar[i][1]; //cout<<"ar2 = "<<ar2[i]<<endl;
 }
 sort(ar2,ar2+n,greater<int>());
 while(sub>0){
    sub = sub-ar2[p]; //cout<<" sub = "<<sub<<endl;
    p++;
    ct++;
 }
 cout<<ct<<endl;
 }
return 0;
}
