#include<iostream>
#include<vector>
using namespace std;

 int main(){
  vector<int> vc;
  int sum=0;
  for(int i=1;i<1010110;i+=1){
    sum += i;
    vc.push_back(sum);
  }

 int ts;
 cin>>ts;
 while(ts--){
    int x,pos=0;;
    cin>>x;
    for(int i=0;i<vc.size();i++){
            cout<<vc[i]<<" ";
        if(vc[i]>=x){
            pos = i;
            break;
        }
    }
    cout<<endl;
    int d2 = vc[pos]-x;
    int d1 = x-vc[pos-1];
      cout<<"d1 d2 "<<d1<<" "<<d2<<endl;
    if(d1<=d2) {
        cout<<(d1+pos+1)<<" ts "<<endl;
    } else {
          cout<<(d2+pos+1)<<endl;
    }


 }

  return 0;
 }
