#include<iostream>
#include<set>
using namespace std;
int main(){
 double n,x1,y1,x2,y2,p,i,b=0;
 cin>>n>>x2>>y2;
 set<double>st;
for(i=0;i<n;i++){
        cin>>x1>>y1;
        if(y2==y1)b=1;
        else st.insert((x2-x1)/(y2-y1));
    }
 cout<<st.size()+b<<endl;
return 0;
}
