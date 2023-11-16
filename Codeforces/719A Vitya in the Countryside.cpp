#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int a,b,n,ar[100],i;
 cin>>n;
 for(i=0;i<n;i++) cin>>ar[i];

 a = ar[n-1] - ar[n-2];
 if(n==1 && ar[0]==0) cout<<"UP"<<endl;
 else if(n==1 && ar[0]==15) cout<<"DOWN"<<endl;
 else if(ar[n-1]==15) cout<<"DOWN"<<endl;
 else if(ar[n-1]==0) cout<<"UP"<<endl;
 else if (n==1) cout<<"-1"<<endl;
 else if(a==1) cout<<"UP"<<endl;
 else if(a==-1) cout<<"DOWN"<<endl;

return 0;
}
