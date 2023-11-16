#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<string>
#include<stdio.h>
using namespace std;
int main(){

 int i,j,a,k,n,len;
 string str[100][100];
 cin>>n;
 for(i=0;i<n;i++) scanf("%s",str);

 vector<pair<string,int> >vec;
 for(i=0;i<n;i++){
       // len = strlen(str[i]);
        len =  str.length();
    vec.push_back(make_pair(str[i],len));
 }


return 0;
}
