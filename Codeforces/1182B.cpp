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

 int n,m,j;
 sci2(n,m);
 char str[n+5][m+5];
 For(i,0,n-1){
   cin>>str[i];
 }

 int total=0,rmx=0,cmx=0,cnt=0;
 vi row,col;
 For(i,0,n-1){
  For(j,0,m-1){
    if(str[i][j]=='*'){
        total++;
        cnt++;
    } else {
      rmx = max(rmx,cnt);
      cnt = 0;
    }
   }
       rmx = max(rmx,cnt);
      row.pb(max(cnt,rmx));
      cnt = 0;
 }
 cnt = 0;
 For(i,0,n-1){
  For(j,0,m-1){
    if(str[j][i]=='*')
        cnt++;
    else {
      cmx = max(cmx,cnt);
      cnt = 0;
      }
    }
    cmx = max(cmx,cnt);
    col.pb(max(cmx,cnt));
    cnt = 0;
  }


 // px(rmx);py(cmx);pz(total);

 int fg = 0;
 For(i,0,sz(row)-2){
  if(row[i]==rmx&&i!=0){
    if(row[i-1]==0||row[i+1]==0){
        fg = 1;
    }
    break;
  }
 }
   For(i,0,sz(col)-2){
  if(col[i]==cmx){
    if(col[i-1]==0||col[i+1]==0&&i!=0){
        fg = 1;
    }
    break;
  }
 }

 int sum = cmx+rmx-1;
 if(cmx<3||rmx<3||total>sum||fg == 1){
    printf("NO\n");

 } else {
    printf("YES\n");
 }


    return 0;
}





