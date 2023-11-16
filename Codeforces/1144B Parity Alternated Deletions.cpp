#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){

 int ary[10000],i,j,n,sum=0;
 cin>>n;
 for(i=0;i<n;i++){
    cin>>ary[i];
 }
 sort(ary,ary+n);
 vector <int> vec(ary,ary+n);
 vector <int>::iterator it,it2;

 for(it=vec.begin(); it!=vec.end(); it++ ){
    if(*it%2==0){    // cout<<" it 0 = "<<*it<<endl;
           vec.erase(it);
        for(it2=vec.begin(); it2!= vec.end(); it2++){
            if(*it2%2==1){  //cout<<" it2 1 = "<<*it2<<endl;
                vec.erase(it2);
                break;
            }
        }
    }
   // cout<<"vecsize = "<<vec.size()<<endl;
       if(*it%2==1){ //cout<<" it 1 = "<<*it<<endl;
         vec.erase(it);
        for(it2=vec.begin(); it2!=vec.end(); it2++){
            if(*it2%2==0){  // cout<<" it2 12= "<<*it2<<endl;
                vec.erase(it2);
                break;
            }
        }
    }
 }
 for(it = vec.begin(); it!=vec.end();it++){
    cout<<" vec.it = "<<*it<<endl;
 }

 for(it = vec.begin(); it!=vec.end();it++){
    sum += *it;
 }
 cout<<sum<<endl;
return 0;
}
