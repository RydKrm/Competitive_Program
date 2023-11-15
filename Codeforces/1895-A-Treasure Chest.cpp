#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int ts;
  cin>>ts;
  while(ts--){
    int c,k,d;
    cin>>c>>k>>d;
    if(k<c) cout<<c<<endl;
    else {
        if((c+d)>k) cout<<k<<endl;
        else {
            long long ans = 2*k-(c+d);
            cout<<ans<<endl;
        }
    }
  }

    return 0;
}