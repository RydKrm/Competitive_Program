#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
int ary[100000],sum=0,
i,j,n,p,count1=0,odd=0,even=0,count2=0;
cin>>n;
for(i=0;i<n;i++) cin>>ary[i];
sort(ary,ary+n,greater<int>());
for(i=0;i<n;i++){
    if(ary[i]%2==1) odd++;
    else even++;
}
int sub = fabs(odd-even);
if(odd==even){
    cout<<"0"<<endl;
    goto down;
}
 else if(sub==1){
    cout<<"0"<<endl;
    goto down;
 }
 if(odd<even) p=odd+1;
 else p = even+1;
 //if(p==0) p=1;
 for(i=0;i<n;i++){
    if(ary[i]%2==0 && count1<p){
        ary[i] = 0;
        count1++;
    }
    else if(ary[i]%2==1 && count2<p){
        ary[i] = 0;
        count2++;
    }
 }
 for(i=0;i<n;i++){
    sum += ary[i];
 }
 cout<<sum<<endl;
 down :
return 0;
}


