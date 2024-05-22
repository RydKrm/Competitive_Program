#include<iostream>
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int n; cin>>n;

        int num, neg=0, mn = 0,ans = 0;
        for(int i=0;i<n;i++){
            cin>>num;
            if(num<0) neg = 1;
            ans += abs(num);
            mn = min(mn,num);
        }

        if(neg==0) {
            ans -= mn;
        }

        cout<<ans<<endl;



    }


    return 0;
}