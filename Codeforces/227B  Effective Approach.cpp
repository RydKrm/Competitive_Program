 #include<iostream>
using namespace std;
int main()
{
long long int n,m,a[100001],i,k=0,l=0,p,q;
  cin>>n;
 for(i=1;i<=n;i++){
   cin>>p;
    a[p]=i;
}
 cin>>m;
 for(i=1;i<=m;i++){
    cin>>q;
    k=k+a[q];
    l=l+n-a[q]+1;
 }
  cout<<k<<" "<<l;
 return 0;
}
