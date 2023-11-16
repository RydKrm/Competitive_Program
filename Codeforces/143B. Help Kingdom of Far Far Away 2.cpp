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

#define For(i,a,n) for(int i=a; i<=n;i++)
#define rFor(i,n,a) for(int i=n; i>=a; i--)
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second

#define px(x) cout<<"X -> "<<x<<endl;
#define py(x) cout<<"Y = "<<x<<endl;
#define pz(x) cout<<"Z >> "<<x<<endl;
#define pstr(x) printf("%s\n",x);

using namespace std;
using ll = long long;
using vi = vector <int>;
using mpii = map<int,int>;
using si = set<int>;
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

int main(){
char str[110];
scstr(str);
int dot=0,p_dot=0,mns=0;
int sz = strlen(str);

for(int i=0;i<sz;i++){
    if(str[i]=='-') mns=1;
    if(str[i]=='.'){
        dot=1;
        p_dot = i;
     break;
    }
}

 px(p_dot); if(mns==1) p_dot--;

 ///fraction size in string
 int fr_sz = p_dot;
 if(dot==0) fr_sz = sz;
 if(mns==1) fr_sz = sz-1;



 ///first comma position .
 if(mns==1) printf("(");
 printf("$");
 int f_com = fr_sz%3;
 if(f_com==0) f_com = 3;
 if(mns==1) f_com++;
 For(i,0,f_com-1){
     if(str[i]=='-') continue;
  printf("%c",str[i]);
 }
 if(fr_sz>3) printf(",");


 pn;cout<<"cheak"<<endl;pn;

 ///Next comma position ..
 int cnt=f_com+3; //px(cnt);
 if(mns==0) fr_sz--;
 For(i,f_com,fr_sz){
  printf("%c",str[i]);
  if(i+1==cnt&&i!=fr_sz){
    printf(",");
    cnt+=3;
  }
 }

  pn;cout<<"cheak"<<endl;
  ///  dot point
  printf(".");
  int d_pos = sz - p_dot-1; //px(d_pos);
  if(dot==0){
    printf("00");
  } else if(d_pos==1){
    printf("%c0",str[p_dot+1]);
  } else {
   printf("%c%c",str[p_dot+1],str[p_dot+2]);
  }

 if(mns==1) printf(")");
  pn;

    return 0;
}





