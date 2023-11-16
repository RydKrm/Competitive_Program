#include <iostream>
using namespace std;
int main(){
 int t,n,i,p;
    cin>>t;
    while(t--){
        p=0;
        cin>>n;
        char mn[n],a[n],b[n];
        cin>>mn;
        a[0]=b[0]='1';
        for(i=1;i<n;i++){
            if(mn[i]=='0'){
                a[i]='0';
                b[i]='0';
            } else {
                if(p==0 && mn[i]=='1'){
                    a[i]='1';
                    b[i]='0';
                    p=1;
                }
                else if(p==1){
                    a[i]='0';
                    b[i]=mn[i];
                }
                else if(p==0&&mn[i]=='2'){
                    a[i]='1';
                    b[i]='1';
                }
            }
        }
        //
       // a[i]='\0';
      //  b[i]='\0';
        cout<<a<<endl;
        cout<<b<<endl;
    }
    return 0;
}
