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
TestCase{
 int n,tzero=0,tone=0,sz,zero,one;
 sci(n);
 string str[n];
 vi siz,ones,zeros;
 For(i,0,n-1){
  cin>>str[i];
   sz = str[i].size();  // px(sz);
   siz.pb(sz);
   zero=0;one=0;
  For(j,0,sz-1){
   if(str[i][j]=='0') {
     zero++;tzero++;
   }
     else{
        one++; tone++;
      }
  } ones.pb(one);zeros.pb(zero);

 }



 int cnt=0;
 For(i,0,n-1){
   if(siz[i]==ones[i]){
    cnt++;
    tone-=siz[i];
   } else if(siz[i]==zeros[i]){
    cnt++;
    tzero-=siz[i];
   } else if(siz[i]%2==1){
     if((zeros[i]%2==1&&ones[i]%2==0)||(zeros[i]%2==0&&ones[i]%2==1)){
        cnt++;
        tzero-=zeros[i];
        tone-=ones[i];
     }
   } else if(siz[i]%2==0&&zeros[i]%2!=1&&ones[i]%2!=1){
     if(zeros[i]%2==0&&ones[i]%2==0){
        cnt++;
         tzero-=zeros[i];
        tone-=ones[i];
     }
   } else if (siz[i]%2==0&&zeros[i]%2==1&&ones[i]%2==1){
     if(zeros[i]>ones[i]){
        zeros[i]--;
        ones[i]++;
     } else {
       ones[i]--;
       zeros[i]++;
     }
     tone -= ones[i]; cout<<"zeros "<<zeros[i]<<endl;
     tzero -= zeros[i]; cout<<"ones "<<ones[i]<<endl;
     cnt++;
   }


    cout<<"total_zero "<<tzero<<endl;
    cout<<"total_one "<<tone<<endl;
 }

 px(cnt);



}









    return 0;
}




