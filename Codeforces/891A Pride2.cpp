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
  int n,ar[2100],cnt=0,g=0,fg=0,one=0;
  sci(n);
  For(i,0,n-1){
      sci(ar[i]);
      if(ar[i]==1){
        fg = 1;
        one++;
      }
  }

  if(n==1){
    printf("-1\n");
    return 0;
  }

  if(fg==1){
    pfi(n-one);
    return 0;
  }


  si st;

  while(1){
    st.clear();

    For(i,0,n-2){
     g = __gcd(ar[i],ar[i+1]); px(g);
     if(g!=ar[i+1]) cnt++;
     st.insert(g);
     ar[i] = g;
     if(g==1){
        goto down;
     }
    }

    auto it = st.begin();
    if(st.size()==1&&*it!=1) {
        printf("-1\n");
        return 0;
    }

  }

  down:
  one = 0;
  For(i,0,n-1){
   if(ar[i]==1) one++;
  }
     cout<<"cnt = "<<cnt<<endl;
     cout<<"one = "<<one<<endl;
   n -=one;
   n+=cnt;
   pfi(n);


    return 0;
}





