#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int n,p;
 cin>>n>>p;
 int fst = p/2;
 if(n%2==0&&p%2==1)p--;
 int lst = (n-p)/2;
 int mn = min(fst,lst);
 cout<<mn<<endl;
 return 0;
}
