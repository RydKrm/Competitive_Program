#include<iostream>
using namespace std;
int main(){
int i,j,n,m,p,q;
 cout<<"Enter the number of node "<<endl;
 cin>>n;
 int ar[n][n];
 for(i=0;i<n;i++){
  for(j=0;j<n;j++){
     ar[i][j]=0;
   }
}

 cout<<"Enter the number of edges you want "<<endl;
 cin>>m;
 for(i=0;i<m;i++){
  cin>>p>>q;
  ar[p-1][q-1] = 1;
  ar[q-1][p-1] = 1;
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
