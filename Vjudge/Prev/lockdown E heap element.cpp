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
using mpll = map<ll,ll>;
using si = set<int>;
using sll = set<ll>;
using sll = set<ll>;
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

 int main(){
 int x;
 char str[20];
 priority_queue<int> que;
 vector<pair<char,int>> vc;
 vector<int> con;
 TestCase{
  cin>>str;
   if(str[0]!='r') sci(x);
  // if(x<0) x=-1*x;

  if(str[0]=='i'){
   // if(x>0) x=x*-1;
    que.push(-x);
    vc.pb(make_pair('i',x));

  } else if(str[0]=='r'&&que.empty()){
    vc.pb(make_pair('i',1));
    vc.pb(make_pair('r',-1));
   // cout<<" queue empty "<<endl;

  } else if(str[0]=='r'&&!que.empty()){
    vc.pb(make_pair('r',-1)); //cout<<" Not queue empty "<<endl;
    que.pop();
  } else{
     while(1){
         if(que.empty()){
            que.push(-x);
            vc.pb(make_pair('i',x));
            vc.pb(make_pair('g',x));
            break;
        }
       if(-x>que.top()){
           que.push(-x);
            vc.pb(make_pair('i',x));
            vc.pb(make_pair('g',x));
            break;
       }
       else if(-x!=que.top()){
             con.pb(que.top());
            que.pop();
            vc.pb(make_pair('r',-1));
        } else {
         vc.pb(make_pair('g',x));
         break;
        }
     }

     for(auto x:con){
      que.push(x); //px(x);
     }
     con.clear();
  }


 }


  pfi(vc.size());pn;
 for(auto x:vc){
  if(x.fi=='i') printf("insert ");
  else if(x.fi=='r') printf("removeMin ");
  else printf("getMin ");

    if(x.second!=-1) cout<<x.second<<endl;
    else cout<<endl;
 }
    return 0;
}





