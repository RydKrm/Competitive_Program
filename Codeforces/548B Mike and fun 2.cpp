#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})
#define sv(a) sort(a.begin(),a.end())
#define zero(arr,a) memset(arr,a,sizeof arr)
#define mk
#define mx 505

int fx[]={0,1,1,1,0,-1,-1,-1};
int fy[]={1,1,0,-1,-1,-1,0,1};

int data[mx][mx],cnt[mx];

int main(){

    int n,m,q;
    sci(n);sci(m);sci(q);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            sci(data[i][j]);
        }
    }

    for(int i=1;i<=n;i++){
        int val=0;
        for(int j=1;j<=m;j++){
            if(data[i][j]==1) val++;
            else val=0;
            cnt[i]=max(cnt[i],val);
        }
    }



    while(q--)
    {
        int x,y;
        sci(x);sci(y);
        data[x][y]^=1;

        int val=0;
        cnt[x]=0;
        for(int j=1;j<=m;j++){
            if(data[x][j]==1) val++;
            else val=0;
            cnt[x]=max(cnt[x],val);
        }

        int ans=0;
        for(int i=1;i<=n;i++) ans=max(ans,cnt[i]);

        pfi(ans);pn;
    }

    return 0;
}
