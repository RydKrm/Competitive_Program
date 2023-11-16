#include<iostream>
using namespace std;
int main(){
 int n,x,y,cnt=0;
 cin>>n>>x>>y;
 int ar[n+5];
 for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
    if(ar[i]<=x) cnt++;
 }

 if(x>y){
    cout<<n<<endl;
    return 0;
 }

 if(cnt%2) cnt++;

 cout<<cnt/2<<endl;



return 0;
}
