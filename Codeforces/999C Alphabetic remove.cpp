#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
 int n,k;
 cin>>n>>k;
 string str;
 cin>>str;
 if(n==k){
   // printf(" ");
    return 0;
 }

 map<char,int> mp_srt,mp_real;
 mp_srt.clear();
 for(int i=0;i<n;i++){
    mp_real[str[i]]++;
    mp_srt[str[i]]++;
 }

 for(int i=0;i<mp_srt.size();i++){
    if(mp_srt[i]<k){
        k-=mp_srt[i];
        mp_srt[i]= 0;
    } else if(mp_srt[i]>k){
        int p=k;
        k = 0;
         mp_srt[i]-=p;
       break;
    } else {
      mp_srt[i]= 0;
      k=0;
      break;
    }
 }
  // cout<<" k = "<<k<<endl;
// for(auto x:mp_srt) cout<<x.first<<" "<<x.second<<endl;

 for(int i=0;i<n;i++){
    if(mp_real[str[i]]>mp_srt[str[i]]){
        mp_real[str[i]]--;
        str[i] = '0';
    }
 }

 for(int i=0;i<n;i++){
    if(str[i]=='0') continue;
    printf("%c",str[i]);
 }


 return 0;
}
