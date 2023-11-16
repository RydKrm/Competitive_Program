#include<iostream>
#include<algorithm>
#include<set>
#include<iterator>
using namespace std;
int main(){

int i,ar[10002],n,ar2[10],m=0,p;
cin>>n;
for(i=0;i<n;i++){
    cin>>ar[i];
}
if(n==1){
    cout<<"0"<<endl;
    return 0;
}
sort(ar,ar+n);
set<int>st;
set<int>::iterator it;
for(i=0;i<n-1;i++){
    if((ar[i+1]-ar[i])!=0){
        p = ar[i+1]-ar[i];
        st.insert(p);
        ar2[m] = p;
        m++;
    }
}
//cout<<"set  = "<<st.size()<<endl;
//for(it=st.begin();it!=st.end();it++){
//cout<<*it<<endl;
//}

if(st.size()>2){
    cout<<"-1"<<endl;
    return 0;
}
it = st.begin();
if(st.size()==1&&*it%2==0){
    cout<<*it/2<<endl;
    return 0;
}
if(st.size()==2){
     if(ar2[0]!=ar2[i]){
        cout<<"-1"<<endl;
        return 0;
    }
}
it = st.begin();
cout<<*it<<endl;



return 0;
}
