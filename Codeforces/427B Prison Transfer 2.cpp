#include<iostream>
using namespace std;
int main(){
 long long int i,j,n,t,c,ar[199999],ct=0,res=0;
 cin>>n>>t>>c;
 for(i=0;i<n;i++) cin>>ar[i];
  for(i=0;i<n;i++){
    	if(ar[i]>t){
    		if(ct>=c) res+= (ct-c)+1;
    			ct=0;
    	}
    	else ct++;
    }
 if(ct>=c) res+=(ct-c)+1;
 cout<<res<<endl;
return 0;
}

