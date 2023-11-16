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

#define Filein(N) freopen("N", "r", stdin)
#define Fileout(N) freopen("N", "w", stdout)
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
#define Trav(var,container) for(auto var:container)
#define mkp make_pair
#define pb push_back
#define fi first
#define se second
#define ins insert
#define px(x) cout<<"X -> "<<x<<endl;
#define py(x) cout<<"Y = "<<x<<endl;
#define pz(x) cout<<"Z >> "<<x<<endl;
#define pcnt(x) cout<<" cnt = "<<x<<endl;
#define pstr(x) printf("%s\n",x);
#define INF 1000000000
#define LINF 5000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000009
#define all(a) a.begin(),a.end()
#define sz(a) (int)a.size()

using namespace std;
using ll = long long;
using vi = vector <int>;
using mpii = map<int,int>;
using mpll = map<ll,ll>;
using mpci = map<char,int>;
using si = set<int>;
using sll = set<ll>;
using sll = set<ll>;
using vll= vector<ll>;
using pii = pair<int,int>;



 int main(){

 TestCase{
     int x1,y1,z1;
     sci(x1);sci2(y1,z1);
     int x2,y2,z2;
     sci(x2);sci2(y2,z2);

     if(x1==x2&&y1==y2&&z1==z2){
        pfi(0);pn;
        continue;
     }

     int les = 0;
     les = min(x1,z2);
     x1 -= les;
     z2 -= les;


     les = min(y1,x2);
     y1 -= les;
     x2 -= les;

     int ans = min(y2,z1);
     z1 -= ans;
     y2 -= ans;
     ans *=2;
     ans -= 2*min(y1,z2);


   pfi(ans);pn;


  }




    return 0;
}






