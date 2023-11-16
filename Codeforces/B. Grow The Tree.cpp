#include<iostream>
#include<algorithm>
using namespace std;
int main(){
long long int ary[100000],n,i,j,a,b,sum1=0,sum2=0,asum=0;
cin>>n;

for(i=0;i<n;i++){
    cin>>ary[i];
}
 sort(ary,ary+n);
 a=n/2;
 for(i=0;i<n;i++){
        if(i<a){
            sum1= sum1+ ary[i];
        }
        else{
            sum2= sum2+ ary[i];
        }
 }
// cout<<"sum1 = "<<sum1<<endl;
// cout<<"sum2 = "<<sum2<<endl;
 asum= sum1*sum1 + sum2*sum2;
 cout<<asum<<endl;
return 0;
}
