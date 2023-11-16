#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int ar1[100005],ar2[100005],i,j,p=0,ct=0,n,m,ar3[100000];
 cin>>m>>n;
 for(i=0;i<m;i++) cin>>ar1[i];
 for(i=0;i<n;i++) cin>>ar2[i];
 sort(ar1,ar1+m);
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(ar2[i]>=ar1[j])
            ct++;
        if(ar2[i]<ar1[j])
            break;
    }
    ar3[p]=ct;
    p++;ct=0;
 }

 for(i=0;i<p;i++)
    cout<<ar3[i]<< " ";

return 0;
}
