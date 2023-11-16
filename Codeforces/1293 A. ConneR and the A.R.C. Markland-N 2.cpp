#include<iostream>
#include<algorithm>
using namespace std;
 int i,t,n,s,k,ar[1020],a,b,p;
int main(){
 cin>>t;
 while(t--){
     cin>>n>>s>>k;
    for(i=1;i<=n;i++) ar[i] = 0;
    for(i=1;i<=k;i++){
        cin>>p;
        ar[p-1] = p;
    }
    a = b = s;
    int cnt1=0,cnt2=0;
    while(1){  cout<<"ar1 = "<<ar[a-1]<<" a = "<<a<<endl;
        if(ar[a-1]!=a){
            break;
        }
        else {
            a++;cnt1++;
            if(s>n)break;
        }
    }

     while(1){
        if(ar[b-1]!=b){
            break;
        }
        else {
            b--;cnt2++;
            if(b==0) cnt2 = 10000;
            if(b==0)break;
        }
    }
    cout<<cnt1<<"  cnt "<<cnt2<<endl;
    cout<<min(cnt1,cnt2)<<endl;
 }

return 0;
}
