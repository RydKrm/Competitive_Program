#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ary[3010];

int main()
{
    int ans=0,n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ary[i];
    }

    sort(ary,ary+n);

    for(int i=1;i<n;i++)
      {
          while(ary[i]<=ary[i-1]) ans++,ary[i]++;
      }
    cout<<ans<<endl;
}
