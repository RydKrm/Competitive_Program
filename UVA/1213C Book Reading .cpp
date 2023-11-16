#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
   long long int m,n,p,q,s10=0,s2=0,x,y,div,i,total;
    cin>>m>>n;
    for(i=1;i<=10;i++){
        s10 += (n*i)%10;
    }
    div = m/n;
    p = div/10;
    q = div%10;
    for(i=1;i<=q;i++){
        s2+= (n*i)%10;
    }
    if(m<n){
        cout<<"0"<<endl;
        continue;
    }
    total = s2+p*s10;
    cout<<total<<endl;
 }
return 0;
}
