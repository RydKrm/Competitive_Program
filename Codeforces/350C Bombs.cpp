/// 5:01PM

//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<iterator>
#include<algorithm>
#include<bitset>

#define Filein(N) freopen("N", "r", stdin);
#define Fileout(N) freopen("N", "w", stdout);
#define sci(x) scanf("%d", &x)
#define sci2(x,y) scanf("%d%d", &x,&y)
#define scll2(x,y) scanf("%lld%lld",&x,&y)
#define scll(x) scanf("%lld",&x)
#define scd(x) scanf("%lf", &x)
#define scstr(x) scanf("%s", x)
#define pfi(x) printf("%d", x)
#define pfll(x) printf("%lld", x)
#define pfd(x) printf("%f", x)
#define pfstr(x) printf("%s", x)
#define ps printf(" ")
#define pn printf("\n")
#define pfdt printf("..")

#define For(var,start,end) for(int var=start; var<=end;var++)
#define rFor(var,start,end) for(int var=start; var>=end; var--)
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)

#define mkp make_pair
#define pb push_back
#define fi first
#define se second

#define px(x) cout<<"X -> "<<x<<endl;
#define py(x) cout<<"Y = "<<x<<endl;
#define pz(x) cout<<"Z >> "<<x<<endl;
#define pstr(x) printf("%s\n",x);

using namespace std;
using ll = long long;
using vi = vector <int>;
using mpii = map<int,int>;
using si = set<int>;
using sll = set<ll>;
using vll= vector<ll>;

#define INF 10000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

 typedef  pair<ll,ll> pii;

 bool cmp(pii a,pii b){
  return abs(a.fi)+abs(a.se)<abs(b.fi)+abs(b.se);
 }

 int main(){
  ll n,sum=0,nsum=0,a,b;
  scll(n);
  vector<pair<ll,ll>> vc;
   For(i,0,n-1){
    scll2(a,b);
    vc.pb(make_pair(a,b));

    if(a==0&&b==0) continue;
    if(a==0||b==0) sum+=2;
    else sum+=4;
   }
   sort(vc.begin(),vc.end(),cmp);

   for(auto x:vc){
   pfll(x.fi);ps;pfll(x.se);ps;
   }pn;

   sum+=n*2;
   pfi(sum);pn;
   int d1,d2;
   char ch1,ch2;

   For(i,0,n-1){
     a = vc[i].fi;
     b = vc[i].se;

    if(a>0) {
        printf("1 %d R\n",a);
        d1 = a;
        ch1 = 'L';
    }else if(a<0){
       printf("1 %d L\n",a*(-1));
        d1 = a*(-1);
        ch1 = 'R';
    }
      if(b>0) {
        printf("1 %d U\n",b);
        d2 = b;
        ch2 = 'D';
    }else if(b<0){
       printf("1 %d D\n",b*(-1));
        d2 = b*(-1);
        ch2 = 'U';
    }
    printf("2\n");
   if(b!=0) printf("1 %d %c \n",d2,ch2);
   if(a!=0) printf("1 %d %c \n",d1,ch1);
     printf("3\n");
   }







    return 0;
}





