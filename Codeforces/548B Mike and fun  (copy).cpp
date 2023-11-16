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

 int main(){
  int n,m,q,pos=0;
  sci2(n,m);sci(q);
  int ar[n+1][m+1],ar2[n+1];
  int sum=0,mx=0;

  For(i,0,n-1){
    sum = 0;
    For(j,0,m-1){
       sci(ar[i][j]);
      sum+=ar[i][j];
    }
    ar2[i] = sum;
   if(sum>mx){
    mx = sum;
    pos = i;
   }
  }



 int a,b;
  while(q--){
   sci2(a,b);
     a--;b--;

    if(ar[a][b]==0){
      ar[a][b] = 1;
      ar2[a]++;
      mx = max(ar2[a],mx);
        pfi(mx); pn;

    } else {

      ar2[a]--;
      int lmx = 0;
      For(i,0,n-1){
       lmx = max(lmx,ar2[i]);
      } pfdt;
      pfi(lmx);pn;
      ar[a][b] = 0;
       mx = lmx;

    }


     //  pn;pfdt; For(i,0,n-1) { pfi(ar2[i]);ps;}pfdt;pn;pn;


  }






    return 0;
}





