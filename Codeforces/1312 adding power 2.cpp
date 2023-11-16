#include<iostream>
#include<algorithm>
using namespace std;
int main(){

long long int n,t,ar[1000],p,k,i;
cin>>t;
while(t--){
    cin>>n>>k;
    for(i=0;i<n;i++) cin>>ar[i];

    for(i=0;i<n;i++){
  if(ar[i]%k==0)

            goto down;
        }
    }
    if(ar[0]==1&&n==1){
        cout<<"YES"<<endl;
        goto down;
    }
    for(i=0;i<n;i++){
        if(ar[i]%k!=0){
            cout<<"NO"<<endl;
            goto down;
        }
    }
    cout<<"YES"<<endl;
    down :;
}
return 0;
}

