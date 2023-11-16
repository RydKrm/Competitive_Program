#include<iostream>
using namespace std;
int main(){
    int a[6],sum=0,i,j,k;
    for(i=0;i<6;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            for(k=j+1;k<6;k++){
                if((a[i]+a[j]+a[k])*2==sum){
                     cout<<"YES"<<endl;
                     return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
