#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
ll n,i,j,s,ar[1000][1000];
cin>>n;
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
  cin>>ar[i][j];

s=sqrt((ar[0][1]*ar[0][2])/ar[1][2]);
cout<<s<<" ";
for(i=1;i<n;i++)
cout<<ar[0][i]/s<<" ";
cout<<endl;
return 0;
}
