#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

 int a=1,n,i,j,k;
 cin>>n;
 for(i=0;i<n+1;i++){
    for(j=n-i;j>0;j--) printf("  ");
    for(j=0;j<=i;j++)printf(" %d",j);
    for(j=i-1;j>=0;j--) printf(" %d",j);
    printf("\n");
 }
int p=n;
 for(i=n-1;i>=0;i--){
    for(j=0;j<a;j++) printf("  ");a++;
    for(j=0;j<p-1;j++)printf(" %d",j);
    for(j=p-1;j>=0;j--)printf(" %d",j);p--;
    ;
    cout<<endl;
 }


return 0;
}
