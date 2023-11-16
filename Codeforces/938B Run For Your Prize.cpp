#include<iostream>
using namespace std;
int main(){

 int i,n,a,mx1=0,mx2=0;
 cin>>n;
 for(i=0;i<n;i++){
    cin>>a;
    if(a<=500000){
        mx1=a-1;
    } else {
        a = 1000000-a;
        if(a>mx2){
         mx2 = a;
        }
    }
 }
 if(mx1>mx2)cout<<mx1<<endl;
 else cout<<mx2<<endl;

return 0;
}
