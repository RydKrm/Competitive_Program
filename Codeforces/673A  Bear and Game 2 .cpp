#include<iostream>
using namespace std;

int main()
{
    int n,t=0,f=0;
    cin>>n;
    int ary[n];

    for(int i=0; i<n;i++){
        cin>>ary[i];
    }
    if(ary[0]>15){
        cout<<15<<endl;
        return 0;
    }
    if(n==1){
        t=ary[0];
    }
    else{
        for(int i=1;i<n;i++){
        if(ary[i]-ary[i-1]>15){
           t=ary[i-1]+15;
           f=1;
           break;
        }
        t=ary[i];
    }
    }
    if(90-ary[n-1]<=15 && f==0) t=90;
    if(90-ary[n-1]>15 && f==0) t+=15;

    cout<<t<<endl;

    return 0;
}
