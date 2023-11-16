#include<iostream>
using namespace std;

int main(){

 int n,ary[1000],i,count=0,a;

 cin>>n;

 for(i=0;i<n;i++){
    cin>>ary[i];
 }

 for(i=0;i<n;i++){
    if(ary[i]==1 && ary[i+1]==0 && ary[i+2]==1){
        count++;
        ary[i+2]=0;
    }
 }

 cout<<count<<endl;

return 0;
}
