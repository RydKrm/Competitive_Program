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

using ll=long long;
using vi= vector<int>;
using mpii = map<int,int>;
using si= set<int>;
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

int main(){

TestCase{
 char str[200100];
 scstr(str);
 int one=0,two=0,three=0,c1=0,c2=0,c3=0;
 int ln1,ln2,ln3,ans=INF,mn=INF,mx=0;

 int ln = strlen(str);

 For(i,0,ln-1){
    if(str[i]=='1') {
        one =1;
        ln1=i;
        c1++;
    }
     else if(str[i]=='2'){
         two=1;
        ln2=i;
        c2++;
    }

     else if(str[i]=='3') {
        three=1;
        ln3=i;
        c3++;
    }
     if(one==1&&two==1&&three==1) {
       mn = min(ln1,min(ln2,ln3));
        mx = max(ln1,max(ln2,ln3));
        ans = min(ans,mx-mn);
        //one=two=three=0;
    }
 }

 if(c1==0||c2==0||c3==0) printf("0\n");
 else pfi(ans+1);pn;

}











    return 0;
}


