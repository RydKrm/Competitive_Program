#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int i,n,t,ar[200000],j;
 cin>>t;
 while(t--){
    int mx=0,mn=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    mn = ar[0];
    mx = ar[n-1];
    int p = mx-mn;
    while(p>=n&&n!=0){
     if(p>=n){
        cout<<"YES"<<endl;
        cout<<"1 "<<n<<endl;
        goto jump;
    }
    n--;
    mn = ar[0];
    mx = ar[n-1];
    int p = mx-mn;
    } cout<<"NO"<<endl;

  jump:;
 }

return 0;
}
