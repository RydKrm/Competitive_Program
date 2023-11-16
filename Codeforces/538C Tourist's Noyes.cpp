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

#define For(var,start,end) for(int var=start; var<=end;i++)
#define rFor(var,start,end) for(int var=start; var>=end; i--)
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

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

 int main(){
   ll n,m,c;
   scll2(n,m);

   ll a,b,ans=0;
   scll2(a,b);
   c = b+a-1;
   ans = c;  //px(ans);pn;

   ll pre_a = a,pre_b = b,top_hike = 0;

   For(i,1,m-1){
    scll2(a,b);

    ll day = a-pre_a;
    ll change = pre_b-b;
    ll total = (day+change)/2;
       top_hike = b+total;

     ans = max(ans,top_hike);

    ll check_a = abs(a-pre_a);
    ll check_b =abs( b-pre_b);
    if(check_b>check_a){
        printf("IMPOSSIBLE\n");
        return 0;
    }


    pre_a = a;
    pre_b = b;

   }

   ll p = n - a;
   b +=p;   //py(b);
   ans = max(ans,b);

   pfll(ans);pn;




    return 0;
}
