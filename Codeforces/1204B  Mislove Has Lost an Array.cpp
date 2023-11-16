#include<iostream>
#include<algorithm>
using namespace std;

int main(){

 int sum1=1,sum2=1,msum2=1,msum1=0,i,j,a,b,min=0,max=0,n,l,r;
 cin>>n>>l>>r;

 min = n-l +1;
 a = n-min;
 for(i=0;i<a;i++){
    sum1 = sum1*2;
    msum1 = sum1 + msum1;
 }
 msum1 = msum1+min;


 ///for max value.....
 //max = n-r+1;
 for(i=0;i<r-1;i++){
    sum2 = sum2*2;
    msum2 = msum2+sum2;
 }
 b = n-r;
 msum2 = msum2+sum2*b;

 ///output section........
 cout<<msum1<<endl;
 cout<<msum2<<endl;

return 0;
}
