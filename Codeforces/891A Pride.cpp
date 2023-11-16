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
  int n,g,cnt=0;
  sci(n);
  int ar[n+5];
  si st;

  For(i,0,n-1) sci(ar[i]);

  while(1){

    st.clear();



  For(i,1,n-1){
      g = __gcd(ar[i],ar[i-1]); cout<<" g = "<<g<<endl;
   st.insert(g);
     ar[i-1] = g;
     cnt++;
  }

    if(ar[n-1]!=ar[n-2]){
      g = __gcd(ar[n-1],ar[n-2]);  cout<<" g = "<<g<<endl;
      ar[n-1] = g;
       cnt++;
    } else {
      g = __gcd(ar[n-2],ar[n-3]);  cout<<" g = "<<g<<endl;
      ar[n-1] = g;
       cnt++;
    }

  auto x = st.begin(); px(*x); py(st.size());
  if(st.size()==1&&*x!=1){
    printf("-1\n");
    return 0;
  } else if(st.size()==1&&*x==1){
    break;
  }

  }

  pfi(cnt);pn;

    return 0;
}





