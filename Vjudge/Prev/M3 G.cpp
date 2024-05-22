#include<iostream>
#include<cstring>
#include<algorithm>
#include<string.h>
#include<map>
using namespace std;
int main(){
 string str,str2;
 cin>>str>>str2;
 int sz = str.size(),go=0;
 map<char,int> mp,mp2;

 for(int i=0;i<sz;i++){
  mp[str[i]]++;
  mp2[str2[i]]++;
 }


 if(go == 0)
 {
    printf("YES\n");
 } else {
    printf("NO\n");
 }




 return 0;
}
