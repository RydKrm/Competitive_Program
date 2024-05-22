#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int a,b,l;
        cin>>a>>b>>l;

        int m=0,n=0, nl = l, cnt=0;

        while(nl%a==0){
            m++;
            nl /=a;
        }

        if(a==b) goto jump;
        nl = l;
        while(nl%b==0){
            n++;
            nl/=b;
        }

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                  int ch = pow(a,i)*pow(b,j);
                  if(l%ch==0) cnt++;
            }
        }

        jump:;

        int ans = 1 + m + n + cnt;

        cout<<ans<<endl;






    }


    return 0;
}