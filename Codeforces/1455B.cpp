#include<iostream>
#include<algorithm>
using namespace std;
int main(){

int ts;
cin>>ts;
while(ts--){
  int x;
  cin>>x;
  int sum=0,cnt=0;
  while(sum<x){
    sum += cnt;
    cnt++;
  }
  --cnt;
  int dif1 = sum-x;
  int dif2 = x - (sum-cnt);

  cout<<"d1 = "<<dif1<<endl;
  cout<<"d2 = "<<dif2<<endl;
  cnt += min(dif1,dif2);
  cout<<"ans "<<cnt<<endl;


}

 return 0;
}
