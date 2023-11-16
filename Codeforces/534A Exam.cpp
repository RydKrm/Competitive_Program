#include<iostream>
using namespace std;
int main(){

 int i,j,a=1,b=2,n,ar[10000];
 cin>>n;

 if(n==1){
    cout<<"1"<<endl;
    cout<<"1"<<endl;
 } else  if(n==2){
    cout<<"1"<<endl;
    cout<<"1"<<endl;
 } else if(n==3){
    cout<<"2"<<endl;
    cout<<"1 3"<<endl;
 }
     else {
          cout<<n<<endl;
       for(i=n-1;i>0;i=i-2){
        cout<<i<<" ";
    }
      for(i=n;i>0;i=i-2){
        cout<<i<<" ";
   }
}
return 0;
}
