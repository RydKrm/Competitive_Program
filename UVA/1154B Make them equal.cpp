#include<iostream>
#include<algorithm>
using namespace std;
int ar[100],i,n,d,ar2[10],m=-1,ar3[10];
int main(){
cin>>n;
for(i=0;i<n;i++) cin>>ar[i];
sort(ar,ar+n);
///for one input...
if(n==1){
    cout<<"0"<<endl;
    return 0;
}
///for two input..
if(n==2){
    if((ar[1]-ar[0])%2==1){
        cout<<"-1"<<endl;
    } else {
      cout<<(ar[1]-ar[0])/2<<endl;
    }
    return 0;
}
///for more input...
for(i=1;i<=n;i++){
    if((ar[i]-ar[i-1])!=0){
        m++;
        ar2[m] = ar[i]-ar[i-1];
    }
}

if(m>2){
    cout<<"-1"<<endl;
    return 0;
}
if(m==1){
    cout<<"  "<<ar2[0]/2<<endl;
    return 0;
}

for(i=1;i<m;i++){
    if(ar2[0]!=ar2[i]){
        cout<<"-1"<<endl;
        return 0;
    }
}

cout<<ar2[0]<<endl;
return 0;
}
