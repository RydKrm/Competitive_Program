#include<iostream>
#include<algorithm>
using namespace std;
int main(){

 int n,ary[100000],i,j,a,b,count=0;

 cin>>n;
 for(i=0;i<n;i++){
    cin>>ary[i];
 }
 sort(ary,ary+n);

 for(i=1;i<n-1;i++){
    if(ary[0]==ary[i] || ary[n-1]==ary[i]){
        ary[i] = -1;
    }
 }
  ary[0]= -1;
 ary[n-1] = -1;

 for(i=0;i<n;i++){
    if(ary[i] != -1){
        count++;
    }
 }

 cout<<count<<endl;
 return 0;
}
