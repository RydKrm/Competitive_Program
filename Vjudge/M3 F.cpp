#include<iostream>
using namespace std;
 int main(){
 int tc;
 cin>>tc;
 while(tc--){
 int n,k,cnt = 0;
 cin>>n>>k;
 int ar[n+5];
 for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
    ar[i]+=k;
    if(ar[i]%7==0)
    {
        cnt++;
    }
 }
 cout<<cnt<<endl;
 }


 return 0;
}
