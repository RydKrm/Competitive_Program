#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n,psum=0,msum=0,m,p,i;
  cin>>n;
  int ar[n+5];
  cin>>ar[0];
   for(i=1;i<n;i++){
    cin>>ar[i];
    if(ar[i-1]>0&&ar[i]<0){
       psum +=ar[i-1];
      msum+=ar[i];
    } else if(ar[i-1]<0&&ar[i]>0){
      msum +=ar[i-1];
      psum+=ar[i];
    }
     cout<<"p "<<psum<<endl;
     cout<<"m "<<msum<<endl;
  }

    //if((msum*-1)>psum) cout<<msum-psum<<endl;
    //else
    cout<<psum+msum<<endl;


 }



return 0;
}
