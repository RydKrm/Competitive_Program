#include<iostream>
using namespace std;
int main(){
 int t,n,i,ar[100000],p,s;
 cin>>t;
 while(t--){
     int sum=0;
     int cnt=0;
     int mx = 0;
    cin>>n>>s;
    for(i=0;i<n;i++){
        cin>>ar[i];
        if(sum<=s){
        sum += ar[i];
        if(mx<ar[i]) mx = ar[i];
       }
    }
    if(sum<=s){
        cout<<"0"<<endl;
        goto jump;
    }
    for(i=0;i<n;i++){
        if(mx==ar[i]){
            cout<<i+1<<endl;
            goto jump;
        }
    }
    jump:;
  }
return 0;
}
