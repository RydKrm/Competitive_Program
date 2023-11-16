#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int m,n,ary[100],i,min,sub=0,ary2[100],a;
 cin>>m>>n;
 for(i=0;i<n;i++){
    cin>>ary[i];
 }
 sort(ary,ary+n);
 for(i=0;i<n-1;i++){
        a=m+i-1;
 if(a>=n){
    break;
 }
    sub=ary[a] - ary[i];
    ary2[i]= sub;  // cout<<"ary2 = "<<ary2[i]<<endl;
 }

 min=ary2[0];         //cout<<"ary 0 = "<<ary2[0]<<endl;
 for(i=1;i<n-m+1;i++){
    if(min>ary2[i]){
        min = ary2[i];   // cout<<"min = "<<min<<endl;
    }
 }

 cout<<min<<endl;

return 0;
}
