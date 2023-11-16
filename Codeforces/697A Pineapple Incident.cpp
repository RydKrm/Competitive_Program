#include<iostream>
using namespace std;
int main(){

 int ary[10000],i,t,s,x,a,p=0,m,count=1;
 cin>>t>>s>>x;
 m = x+s;

 if(t==s && x==0){
    cout<<"NO"<<endl;
    goto down;
 }

 for(i=0;p<m;i++){
    p = t + s*i;
    a = p+1;

        if(p==x){
        cout<<"YES"<<endl;
        break;
    }
     else if(i==0){
      continue;
    }
     else if(a==x){
        cout<<"YES"<<endl;
        break;
    }
 }
 if(p>m){
    cout<<"NO"<<endl;
 }

 down :
return 0;
}
