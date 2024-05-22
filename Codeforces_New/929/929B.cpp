#include<iostream>
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int n; cin>>n;
        int p, one =0, sum=0;

        for(int i=0;i<n;i++){
            cin>>p;
            if(p%3==1) one++;
            sum += p;
        }

        if(sum%3==0) cout<<0<<endl;
        else if(sum%3==2) cout<<1<<endl;
        else if(sum%3==1 && one) cout<<1<<endl;
        else if(sum%3==1 && !one) cout<<2<<endl;




    }


    return 0;
}