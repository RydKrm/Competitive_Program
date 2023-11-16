 /// comment checking

#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter Number "<<endl;
  cin>>n;
  n++;
  string str[n+5];
  for(int i=0;i<n;i++) {
    getline(cin,str[i]);
  }

  for(int i=0;i<n;i++){
    int sz = str[i].size(); //cout<<"sz = "<<sz<<endl;
    for(int j=0;j<sz;j++){
        if(str[i][j]=='/'&&str[i][j+1]=='/'){
                j +=2;
                cout<<"Single Line comment : ";
            while(j<sz){
                cout<<str[i][j];
                 j++;
            }
            cout<<endl;
        }
       if(str[i][j]=='/'&&str[i][j+1]=='*'){
         j += 2;
         cout<<"Multiple Line comment : ";
         for( ;i<n;i++){
            for(  ;j<str[i].size();j++){
                if(str[i][j]=='*'&&str[i][j+1]=='/') {
                    goto down;
                }
                else cout<<str[i][j];
            } j = 0;
         }
         down:;
         cout<<endl;
       }

    }
  }




  return 0;
}
