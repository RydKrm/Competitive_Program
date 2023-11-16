#include<iostream>
#include<set>
using namespace std;

set<int>st;
set<int>:: iterator it;

int dSum(int n){
    int Sum=0;
    while(n){
        Sum+=n%10;
        n=n/10;
    }
    return Sum;
}

int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=1000;i++) {
        if(dSum(n-i)==i)
          st.insert(n-i);
  }
    cout<<st.size()<<endl;
    for(it=st.begin();it!=st.end();it++)
     cout<<*it<<" ";
}
