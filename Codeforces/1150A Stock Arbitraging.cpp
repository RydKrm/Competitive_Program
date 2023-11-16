#include<iostream>
using namespace std;

int main(){

 int n,m,r,ary1[1000],i,ary2[1000],min=0,max=0,p;

 cin>>n>>m>>r;

 for(i=0; i<n; i++){
    cin>>ary1[i];
 }
 min = ary1[0];
 for(i=0;i<n;i++){
    if(min>ary1[i]){
        min=ary1[i];
    }
 }

// cout<<" min  = "<<min<<endl;

for(int i =0; i<m; i++){
    cin>>ary2[i];
 }
 max = ary2[0];
 for(i=0;i<m;i++){
    if(max<ary2[i]){
        max=ary2[i];
    }
 }
// cout<<" max  = "<<max<<endl;

 p = r/min;
 int a = r%min;
 int sum = max*p + a;

 if(min>max){
    cout<<r<<endl;
 }else{
   cout<<sum<<endl;
 }

return 0;
}


