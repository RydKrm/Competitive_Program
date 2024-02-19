#include<iostream>
using namespace std;

int main(){
  int ts;cin>>ts;
  while(ts--){
    int n;
    string str;
    cin>>n;
    cin>>str;

    int a=0,b=0,ab=0,ans=0;

    for(int i=0;i<n-1;i++){
      if(str[i]=='A' && str[i+1]=='B'){
        ab++;
        ans += a+1;
       // i++;
      }else if(str[i]=='B' && str[i+1]=='A'){
        if(ans) ans += b;
        a=0;
        b=0;
        //i++;
      } 
      else if(str[i]=='A') a++;
      else if(str[i]=='B') b++;
    }
     if(str[n-1]=='B' and str[n-2]!='A') a++;
    if(ans) ans += b;
    if(ab) ans += ab-1;

    cout<<ans<<endl;

  }


    return 0;
}