#include<iostream>
using namespace std;
int main(){
 int n,m,p,ar[1000],k,ct=0;
 cin>>n>>k;
 for(int i=0;i<n;i++) cin>>ar[i];
 int mx = ar[0];
 m = ar[0];
 for(int i=1;i<=n;i++){
    for(int j=0;j<n;j++){
        if(ar[j]==i)
            ct++;
            p=i;
    }
    if(ct>mx){
        mx=ct;
        m = i;
    }
    ct=0;
 }

 cout<<m<<endl;
return 0;
}
