#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int ar[2000],ar1[2000],ar2[2000],n,i,m,cnt=0,x=0,p;
 cin>>n>>m;
 for(i=0;i<n;i++) cin>>ar[i];
 for(i=0;i<n;i++) cin>>ar1[i];
 sort(ar,ar+n);
 sort(ar1,ar1+n);
 for(i=0;i<m;i++){
    for(int j=0;j<n;j++){
        ar2[j] = (ar[j]+x)%m;
        if(ar2[j]!=ar1[j]){
            x++;
            cnt=1;
            break;
        }
    }

 if(cnt==0){
        cout<<x<<endl;
        return 0;
    }
    cnt=0;
 }
    return 0;
}
