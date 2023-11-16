#include<iostream>
using namespace std;
int main(){

 long long int ary1[100000],ary2[100000],i,j,n,m,t,p,q,a,b,count=0;

 cin>>t;
 for(int k=0;k<t;k++){
        count=0;

    cin>>n;
    for(i=0;i<n;i++){
    cin>>ary1[i];
    }

    cin>>m;
    for(i=0;i<m;i++){
        cin>>ary2[i];
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a=ary1[i]-ary2[j];
           // b=ary2[j]-ary1[i];
            if(a%2==0){//} && b%2==0){
                count++;
            }
        }
    }
    cout<<count<<endl;

 }


return 0;
}
