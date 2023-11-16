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
 int n;
 sci(n);
 priority_queue<int> odd,even;

 For(i,1,n){
  int a;
  sci(a);
  if(a%2) odd.push(a);
  else even.push(a);
 }
 ll a=0,b=0;
 while(!odd.empty()||!even.empty()){
 if(!even.empty() && !odd.empty()){
    if(odd.top()<even.top()){
       a += even.top();
       even.pop();
    } else if(odd.top()>=even.top()){
      odd.pop();
      }
    } else if(!even.empty() && odd.empty()){
        a += even.top();
       even.pop();
    } else if(!odd.empty()){
     odd.pop();
    }

   if(odd.empty() && even.empty()) break;

     if(!even.empty() && !odd.empty()){
    if(odd.top()>even.top()){
       b += odd.top();
       odd.pop();
    } else if(odd.top()<=even.top()){
      even.pop();
      }
    } else if(!odd.empty() && even.empty()){
        b += odd.top();
       odd.pop();
    } else if(!even.empty()){
     even.pop();
    }


 //px(a);
// py(b);

 }

 if(a>b) cout<<"Alice"<<endl;
 else if(a<b) cout<<"Bob"<<endl;
 else cout<<"Tie"<<endl;

}





    return 0;
}





