#include<iostream>
#include<algorithm>
using namespace std;

int main(){

 int a,b,n,ary[100000],i,j;
 cin>>n;
 for(i=0;i<n;i++) cin>>ary[i];
 sort(ary,ary+n);

 for(i=0;i<n;i++){
    for(j=i+2;j<n;j++){
        if((ary[i]+ary[i+1])>ary[j]){
            cout<<"YES"<<endl;
            goto down;
        }
    }
 }

 if(i==n)cout<<"NO"<<endl;
 down:


return 0;
}
