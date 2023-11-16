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

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007
 ll ar[2100][2100];
 int main(){
  ll n,start=0,sum=0,c=0;
  cin>>n;

  For(i,1,n){
   For(j,1,n){
    sci(ar[i][j]);
   }
  }
 vector<pair<ll,pair<int,int>>>vc;

  For(i,1,n){
   For(j,1,n){
       sum = 0;
     start = max(i,j); //cout<<"start = "<<start<<endl;
     c = 0;
     For(k,start,n){
       sum+=ar[i+c][j+c];// cout<<"sum "<<sum<<endl;
                         //cout<<"ar "<<ar[i+c][j+c]<<endl;
       c++;
     } // px(sum);pn;pn;

    start = min(i,j)-1;
    c=0;
    for(int k=start;k>0;k--){
     sum+=ar[i-c][j-c];
     c++;
    }

    start = min(i,j)-1;
    c=0;
    for(int k=start;k>0;k--){
     sum+=ar[i+c][j-c];
     c++;
    }

    start = max(i,j);
    c=1;
    for(int k=start;k>0;k--){
     sum+=ar[i-c][j+c];
     c++;
    }
  px(sum);
     vc.pb(make_pair(sum,make_pair(i,j)));
   }
  }

  sort(vc.begin(),vc.end());

  ll  sz = vc.size()-1;

  sum = vc[sz].fi+vc[sz-1].fi;

  pfll(sum);pn;


    return 0;
}





