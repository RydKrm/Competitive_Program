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
  TestCase{
   mpii mp;
   mp.clear();
   int n,k,fg=0,c,cn=0;
   sci2(n,k);
   int ar[n];
   For(i,0,n-1){
     sci(c);
     if(c%k==0) continue;
     ar[cn] = c;
     cn++;
     mp[c]++;  //py(mp[c]);
    if(c%k!=0) fg=1;
  }

  if(fg==0){
    printf("0\n");
    continue;
  }

   sort(ar,ar+cn,greater<int>());
  int a=0,x=0,cnt=0;

  while(a<cn){
    if((ar[a]+x)%k==0&&mp.count(ar[a])){

       if(mp[ar[a]]!=1) mp[ar[a]]--;
       else mp.erase(ar[a]);
         a++;
       if(x==0) continue;

        x++;
        cnt++;
    } else {
      int p = (k-x%k);    // py(p);
      if(mp.count(p)){
         if(mp[ar[a]]!=1) mp[ar[a]]--;
         else mp.erase(ar[a]);
        cnt++;
        a++;
        x++;
      } else{
         x++;
         cnt++;
      }

    }


  }


   pfi(cnt);pn;
 // px(cnt);
  }





    return 0;
}





