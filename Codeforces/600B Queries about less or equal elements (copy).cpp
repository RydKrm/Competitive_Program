#include<bits/stdc++.h>
using namespace std;
int main(){

 int ar[200100],ar2[200100],i,j,n,m,ans=0;
 cin>>n>>m;
 for(i=0;i<n;i++) cin>>ar[i];
 sort(ar,ar+n);
 for(i=0;i<m;i++){
        int x;
        cin>>x;
    ans = upper_bound(ar,ar+n,x)-ar;
    cout<<ans<<" ";
 }

return 0;
}

