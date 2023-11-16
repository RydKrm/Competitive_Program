#import<iostream>
using namespace std;
int a,b,c;main(){
    cin>>a>>b>>c;
    if(a==b) cout<<"YES"<<endl;
    else if(c&&(b-a)%c==0&&(b-a)/c>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
    }
