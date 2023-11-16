#include<iostream>
#include<algorithm>
#define linf 999999999999
using ll = long long ;
using namespace std;
int main(){
 ll n,m;
 cin>>n>>m;
 ll ar[n][m];
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>ar[i][j];
    }
 }

 ll mx = 0;

for(int i=0;i<n;i++){
   ll mn = linf;
    for(int j=0;j<m;j++){
     mn = min(mn,ar[i][j]);
    }
    mx = max(mn,mx);
}

 cout<<mx<<endl;

return 0;
}
