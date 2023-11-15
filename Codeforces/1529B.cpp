#include<iostream>
#include<algorithm>
using namespace std;
 int main(){
  int ts;
  cin>>ts;
  while(ts--){
    int n;
    cin>>n;
    int ar[n+5],ans=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    if(ar[i]<1) ans++;
    }

    sort(ar,ar+n);
    long long mnDis=998000000000;
    for(int i=1;i<n;i++){
     if(ar[i-1]<1 && ar[i]<1){
        long long dis = abs(ar[i-1]-ar[i]);
        mnDis = min(mnDis,dis);
     }

    }

  //  cout<<"mn "<<mnDis<<endl;

    for(int i=0;i<n;i++){
        if(ar[i]>=1 && ar[i]<=mnDis){
            ans++;
            break;
        }
    }
    cout<<ans<<endl;



  }


  return 0;
 }
