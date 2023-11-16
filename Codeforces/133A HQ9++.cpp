#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char p[101];
    int i, c=0;
    cin>>p;

    for(i=0; i<strlen(p); i++){
        if (p[i]=='H'||p[i]=='Q'||p[i]=='9') {
            c++;
            break;
        }
    }
    if(c==1) cout<<"YES"<<endl;
    else cout<<"NO\n"<<endl;


    return 0;
}
