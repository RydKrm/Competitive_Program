#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 long long int ar[100],i,mx=0,mn=0;
 for(i=0;i<5;i++) cin>>ar[i];
 sort(ar,ar+5);
 for(i=0;i<4;i++) mn+=ar[i];
 for(i=1;i<5;i++) mx+=ar[i];
 cout<<mn<<" "<<mx<<endl;
return 0;
}
