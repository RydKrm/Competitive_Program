#include<iostream>
#include<algorithm>
using namespace std;
int main(){

 int n,ary[100000],i,j,a,b;

 cin>>n;
 for(i=0;i<n;i++){
    cin>>ary[i];
 }
 sort(ary,ary+n);
 a= n/2;

 if(n<3){
    cout<<"0"<<endl;
 } else if(ary[0]==ary[n-1])
 cout<<"0"<<endl;
 else if(ary[0]==ary[a])
    cout<<"0"<<endl;
 else if(ary[n-1]==ary[a])
    cout<<"0"<<endl;
 else
    cout<<n-2<<endl;


return 0;
}
