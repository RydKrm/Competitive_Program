#include<iostream>
#include<algorithm>
using namespace std;
int main(){

 int ar[100],n,ct=0,p,i;
 cin>>n;
 for(i=0;i<n;i++)cin>>ar[i];
 sort(ar,ar+n);
 for(i=0;i<n;i++){
    if(ar[i]==ar[i+1]){
        ct++;
        i++;
    }
 }
 cout<<ct/2<<endl;

return 0;
}
