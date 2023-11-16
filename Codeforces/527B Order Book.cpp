#include<iostream>
using namespace std;
int main(){
 int p,d,n,s,i,m=0,m2=0,fg=0;
 char c;
 cin>>n>>s;
 int buy[n+2][3],sell[n+2][3];
 for(i=0;i<n;i++){
  cin>>c>>p>>d;
  if(c=='B'){
   for(i=0;i<m;i++){
    if(buy[i][0]==d){
     buy[i][1]+=p;
     fg=1;
     buy[i][2] = buy[i][0]-buy[i][1];
     break;
    }
   }
   if(fg==0){
    m++;
    buy[m][0] = d;
    buy[m][1] = p;
    buy[m][2] = d-p;
   } fg=0;
  }

  else {
       for(i=0;i<m2;i++){
    if(sell[i][0]==d){
     sell[i][1]+=p;
     fg=1;
     sell[i][2] = sell[i][0]-sell[i][1];
     break;
    }
   }
   if(fg==0){
    m2++;
    sell[m2][0] = d;
    sell[m2][1] = p;
    sell[m2][2] = d-p;
   } fg=0;
  }
 }



cout<<"BUY>> "<<endl;
 for(i=0;i<m;i++){
  cout<<buy[i][0]<<" "<<buy[i][1]<<" "<<buy[i][2]<<endl;
 }


cout<<"SELL>> "<<endl;
 for(i=0;i<m2;i++){
  cout<<sell[i][0]<<" "<<sell[i][1]<<" "<<sell[i][2]<<endl;
 }
return 0;
}
