#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;


 int main(){
 int ts;
 cin>>ts;
 while(ts--){
  int n,k;
  scanf("%d %d",&n,&k);
  int ar[n+5];
 for(int i=0;i<n;i++){
   scanf("%d",&ar[i]);
  }

 sort(ar,ar+n);

  n = n-k;

 if(n>=0){
    cout<<ar[n]<<endl;
 } else {
   cout<<0<<endl;
 }

 }




    return 0;
}





