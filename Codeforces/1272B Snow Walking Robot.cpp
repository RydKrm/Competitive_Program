#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
 int t,r=0,u=0,l=0,d=0,ud=0,rl=0,i,j;
 string str;
 cin>>t;
 while(t--){
    cin>>str;
    r=0,l=0,u=0,d=0;
  int n = str.size();
  for(i=0;i<n;i++){
    if(str[i]=='U') u++;
    else if(str[i]=='D') d++;
    else if(str[i]=='L') l++;
    else r++;
  }
  rl = min(r,l);
  ud = min(u,d);
  if(rl==ud&&rl==0) cout<<"0"<<endl;
  else if(rl==0) cout<<"2\n"<<"UD"<<endl;
  else if(ud==0) cout<<"2\n"<<"RL"<<endl;
  else {
    cout<<2*(ud+rl)<<endl;
    for(i=0;i<rl;i++) cout<<"L";
    for(i=0;i<ud;i++) cout<<"U";
    for(i=0;i<rl;i++) cout<<"R";
    for(i=0;i<ud;i++) cout<<"D";
    cout<<endl;
  }
 }
return 0;
}
