#include<iostream>
#include<vector>
using namespace std;
int main(){
  int ts;
  cin>>ts;
  while(ts--){
    string str;
    cin>>str;

    vector<int> vc;
    int two_one = 0;
    for(int i=0;i<str.size();i++){
        if(!two_one && str[i]=='1' && str[i+1]=='0'){
            vc.push_back(i+1);
        }
        if(str[i]=='1' && str[i+1]=='1'){
            two_one = 1;
            continue;
        }

        if(two_one && str[i]=='0'){
              vc.push_back(i+1);
        }


    }
    int ans = 1;
    for(int i=1;i<vc.size();i++){
        if(vc[i]-vc[i-1]==1){
            ans = 0;
            break;
        }
    }

    if(ans){
        cout<<"YES"<<endl;
    } else cout<<"No"<<endl;

  }


 return 0;
}
