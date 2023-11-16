#include<iostream>
using namespace std;
int main(){

 int a=1,n,i,j,k;
 cin>>n;
 for(i=0;i<n+1;i++){
    for(j=n-i;j>0;j--) cout<<"  ";
    for(j=0;j<=i;j++) cout<<j<<" ";
    for(j=i-1;j>=0;j--) cout<<j<<" ";
    cout<<endl;
 }
int p=n;
 for(i=n-1;i>=0;i--){
    for(j=0;j<a;j++) cout<<"  ";a++;
    for(j=0;j<p-1;j++) cout<<j<<" ";
    for(j=p-1;j>=0;j--) cout<<j<<" ";p--;
    ;
    cout<<endl;
 }


return 0;
}
