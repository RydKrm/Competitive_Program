#include<iostream>
using namespace std;
int main(){

 int a,n,i,j,p,ar[1000];
 cout<<"Enter how many number you want "<<endl;
 cin>>n;
 cout<<"Enter all values "<<endl;
 for(i=0;i<n;i++) cin>>ar[i];

 cout<<"Enter the position "<<endl;
 cin>>a;
 cout<<"Enter the value you want to enter "<<endl;
 cin>>p;
 for(i=n-1;i!=a;i--) ar[i+1] = ar[i];
 ar[a-1] = p;

 cout<<"All values are "<<endl;
 for(i=0;i<=n;i++) cout<<ar[i]<<" ";



return 0;
}
