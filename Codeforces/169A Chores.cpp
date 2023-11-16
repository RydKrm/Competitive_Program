#include<iostream>
#include <algorithm>
using namespace std;

int main(){

 int ary[2000],n,a,b,x,h;
 cin>>n>>a>>b;
 for(int i=0;i<n;i++){
    cin>>ary[i];
 }
 sort(ary,ary+n);
 if(ary[b-1]==ary[b]){
    cout<<"0"<<endl;
 }else{
     int sub = ary[b] - ary[b-1];
  cout<<sub<<endl;
 }
return 0;
}
