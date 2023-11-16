#include<iostream>
using namespace std;
int main(){
int i,j,n,m,p,q,w;
#define inf 1878121212
 cout<<"Enter the number of node "<<endl;
 cin>>n;
 int ar[n][n];
 for(i=0;i<n;i++){
  for(j=0;j<n;j++){
     ar[i][j]=inf;
   }
}

 cout<<"Enter the number of edges you want "<<endl;
 cin>>m;
 for(i=0;i<m;i++){
 cout<<"Enter two nde number and wegth "<<endl;
  cin>>p>>q>>w;
  ar[p-1][q-1] = w;
 }

 cout<<"Matrix is - "<<endl;
 for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    cout<<ar[i][j]<<" ";
  }
  cout<<endl;
 }
return 0;
}
