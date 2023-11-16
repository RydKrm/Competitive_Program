#include<iostream>
#include<algorithm>
using namespace std;

int main(){

 int n,ary[100],i,j,sum1=0,sum2=0,a,b;

 cin>>n;
 for(i=0;i<n;i++){
    cin>>ary[i];
 }

 sort(ary,ary+n);

for(i=0;i<n/2;i++){
    sum1 += ary[i];
 }

for(i=n/2;i<n;i++){
      sum2 += ary[i];
 }

 if(sum1==sum2){
    cout<<n/2+1<<endl;
 }
 else {
    cout<<n/2<<endl;
 }

return 0;
}
