#include<iostream>
using namespace std;
int main(){
 int ary[10000][10],n,i,s1=0,s2=0,p=0,ct=0,a,b;
 int sum1=0,sum2=0;
 cin>>n;
 for(i=0;i<n;i++){
        cin>>ary[i][0];
        cin>>ary[i][1];
 }

 for(i=0;i<n;i++){
    if(ary[i][0]>=ary[i][1]){
        s1 = ary[i][0] - ary[i][1];
        sum1 = sum1+s1;
    }

    else if(ary[i][0]<ary[i][1]){
        s2 = ary[i][1] - ary[i][0];
        sum2 = sum2+s2;
    }
 }
    cout<<"sum1 = "<<sum1<<endl;
    cout<<"sum2 = "<<sum2<<endl;

 if(sum1<sum2){
    for(i=0;i<n;i++){
         if(ary[i][0]>ary[i][1]){
        s1 = ary[i][0] - ary[i][1];
        if(s1>ct){
            s1 = ct;
            p = i+1;
        }
    }
    }
 }
 else if(sum1>sum2){
    for(i=0;i<n;i++){
         if(ary[i][0]<ary[i][1]){
        s2 = ary[i][1] - ary[i][0];
        if(s2>ct){
            s2 = ct;
            p = i+1;
        }
    }
    }
 }



 cout<<p<<endl;



 return 0;
}
