#include<iostream>
using namespace std;
int div(int a,int b,int c){
    int p,ans;
 p = b-a;
 ans = p%c; cout<<"ans = "<<ans<<endl;
 return ans;
}

int main(){
 int a,b,c,p,i;
 cin>>a>>b>>c;
 //if(a<b)cout<<"NO"<<endl;
 //else
 if(a==b)cout<<"YES"<<endl;
 else if(a<=0 && b>=0 && c<=0) cout<<"NO"<<endl;
 else if(a>=0 && b<=0 && c>=0) cout<<"NO"<<endl;
 else if(div(a,b,c)==0) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 return 0;
}
