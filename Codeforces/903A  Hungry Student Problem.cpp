#include<iostream>
using namespace std;
int main(){

 int m,n,p,i,x;
 cin>>n;
 for(i=0;i<n;i++){
    cin>>x;
    if(x%3==0 || x%7==0){
        cout<<"YES"<<endl;
        continue;
    }
     else if(x>11||x==10){
        cout<<"YES"<<endl;
    }
    else
      cout<<"NO"<<endl;
 }

return 0;
}
