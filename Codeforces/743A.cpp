#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int n,a,b,i;
 cin>>n>>a>>b;
 string str;
 cin>>str;

 if(str[a-1]==str[b-1]){
    printf("0\n");
    return 0;
 }

 cout<<1<<endl;

return 0;
}
