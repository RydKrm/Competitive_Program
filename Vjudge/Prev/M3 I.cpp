#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int tc;
 cin>>tc;
 while(tc--){
    int n,m,k;
    cin>>n>>m>>k;
    int ar[n+5];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    if(m<=k)
    {
        int a=0, b = n-1;

        for(int i=1;i<m;i++)
        {
            if(ar[a]>ar[b])
            {
                b--;
            }
            else
            {
                a++;
            }
        }
        cout<<max(ar[a],ar[b])<<endl;
    }
   else
   {
       int a=0,b=n-1;

       for(int i=0;i<k;i++)
       {
            if(ar[a]>ar[b])
            {
                b--;
            }
            else
            {
                a++;
            }
           // cout<<"A "<<ar[a]<<" "<<ar[b]<<endl;
       }

       for(int i=k;i<m-1;i++)
       {
           if(ar[a]>ar[b])
           {
               a++;
           }
           else
           {
               b--;
           }
       }
       cout<<max(ar[a],ar[b])<<endl;

   }



 }





 return 0;
}
