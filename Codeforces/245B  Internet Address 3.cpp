#include<iostream>
#include<list>
#include<string>
using namespace std;
int main(){

 int i,s,ru=0,cnt=0;
 string str;
 cin>>str;
 list<string>lst;// = str;
 list<string>:: iterator it;
 for(it = lst.begin();it != lst.end();it++){
    if(*it=='p' && *it-1=='t'){
        lst.insert(it,':');
        lst.insert(it+1,'//');
    }
    if(*it=='u'&&*it-1=='r'){
        lst.insert(it-2,'.');
        lst.insert(it+1,'/');
    }
 }

 for(it=lst.begin();it!=lst.end();it++) cout<<*it;

return 0;
}
