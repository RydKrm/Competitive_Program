#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int t,n,ar[10],p,cnt;
 cin>>t;
 while(t--){
 cnt=0;
  cin>>ar[0]>>ar[1]>>ar[2];
  sort(ar,ar+3);
  if(ar[0]+ar[1]>ar[2]){
     cnt = ((ar[1]+ar[0])-ar[2])/2;
    //cnt = p;

  }

  //for(int i=0;i<3;i++) cout<<ar[i]<<" ";
  cnt += ar[0];  //cout<<"ar0 = "<<ar[0]<<endl;
  ar[2]=ar[2]-ar[0];  //cout<<"ar2 = "<<ar[2]<<endl;
  ar[0] = 0;
  n=min(ar[1],ar[2]); //cout<<"n = "<<n<<endl;
  cnt = cnt+n;
  cout<<cnt<<endl;
 }
return 0;
}

