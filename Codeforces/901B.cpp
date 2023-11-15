#include<iostream>
using namespace std;
#define ll long long
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        ll n,m,k;
        cin>>n>>m>>k;
        ll ar1[n+1],ar2[m+1];
        ll mn1=900000000000,mn2=90000000000,sum=0;
        ll mx1=0,mx2=0;
        for(int i=0;i<n;i++){
            cin>>ar1[i];
            mn1 = min(mn1,ar1[i]);
            mx1 = max(mx1,ar1[i]);
            sum += ar1[i];
        }

        for(int i=0;i<m;i++){
            cin>>ar2[i];
            mn2 = min(mn2,ar2[i]);
            mx2 = max(mx2,ar2[i]);
        }

        if(k>0 && mn1<mx2){
            sum = sum-mn1+mx2;
            if(mx2>mx1) mx1 = mx2;
            if(mn1<mn2) mn2 = mn1;
        }
        if(k&1 && mn2<mx1){
            sum = sum-mn2+mx1;
        }


        cout<<"check "<<sum<<endl;



    }



 return 0;
}

