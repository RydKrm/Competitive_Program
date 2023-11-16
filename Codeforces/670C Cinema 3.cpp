
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
#include<set>
#include<iterator>
#include<algorithm>

#define Filein(N) freopen("N", "r", stdin);
#define Fileout(N) freopen("N", "w", stdout);
#define sci(x) scanf("%d", &x)
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

#define For(i,a,n) for(int i=a; i<=n;i++)
#define rFor(i,n,a) for(int i=n; i>=a; i--)
#define trav(a,x) for (auto &a : x)
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)

#define All(V) V.begin(), V.end()
#define rAll(V) V.rbegin(), V.rend()

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second

#define Px(x) cout<<"Check X: "<<x<<endl;
#define Py(x) cout<<"Check Y: "<<y<<endl;
#define Pz(x) cout<<"Check Z: "<<z<<endl;
#define P(x,x1) printf("%s = %d\n",x,x1);

using namespace std;

using ll=long long;
using vi= vector<int>;
using si= set<int>;
using vll= vector<ll>;
typedef pair <int, int> pii;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

int main(){
 int n,m,i;
 map<int,int> mp;
 sci(n);
 For(i,0,n-1){
  int p;
  sci(p);
  mp[p]++;
 }
 for(auto y:mp) cout<<y.ff<<" "<<y.ss<<endl;

 int mx=0;
 sci(m);
 int id = 0,ar[m+5],ar2[m+5];
  For(i,0,m-1) sci(ar[i]);
  For(i,0,m-1) sci(ar2[i]);

  For(i,0,m-1){
    if(mx<(mp[ar[i]]+mp[ar2[i]])){
      mx = mp[ar[i]]+mp[ar2[i]];
      id = i+1;
    }
  }
  pfi(id);pn;



    return 0;
}

