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

 int mp[10];

 int main(){
  int n,ar[100000],fg=0;
  sci(n);
  mpii mp;

  For(i,0,n-1){
    sci(ar[i]);
    mp[ar[i]]++;
    if(ar[i]==5||ar[i]==7){
        fg = 1;
    }
  }


 if(fg==1||mp[1]==0){
    printf("-1\n");
    return 0;
 }
 vi vc;
 while(5){
    if(mp[1]&&mp[2]&&mp[4]){
        vc.pb(1);
        vc.pb(2);
        vc.pb(4);
        mp[1]--;
        mp[2]--;
        mp[4]--;
    } else if(mp[1]&&mp[2]&&mp[6]){
        vc.pb(1);
        vc.pb(2);
        vc.pb(6);
        mp[1]--;
        mp[2]--;
        mp[6]--;
    } else if(mp[1]&&mp[3]&&mp[6]){
        vc.pb(1);
        vc.pb(3);
        vc.pb(6);
        mp[1]--;
        mp[3]--;
        mp[6]--;
    }else if(mp[1]==0) break;
     else {
      printf("-1\n");
     // px(mp[1]);
      return 0;
    }


 }

 For(i,0,n-1){
   pfi(vc[i]); ps;
   if((i+1)%3==0) pn;
 }



    return 0;
}





