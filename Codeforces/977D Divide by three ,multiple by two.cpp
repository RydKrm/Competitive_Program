#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
 int n,i,p,fg=0;
 vector<int>vec2,vec3,vec23,vec4;
 cin>>n;
 for(i=0;i<n;i++){
  cin>>p;
  if(p%2==0&&p%3==0){
    vec23.push_back(p);
    continue;
    }
  if(p%2==0){
    vec2.push_back(p);
    continue;
    }
  if(p%3==0){
  vec3.push_back(p);
   continue;
   }
 }
 sort(vec2.begin(),vec2.end());
 sort(vec3.begin(),vec3.end(),greater<int>());
 sort(vec23.begin(),vec23.end());
 for(i=0;i<vec3.size();i++) vec4.push_back(vec3[i]);
 for(i=0;i<vec23.size();i++) vec4.push_back(vec23[i]);
 for(i=0;i<vec2.size();i++) vec4.push_back(vec2[i]);

 for(i=0;i<vec4.size();i++){
   //cout<<vec4[i]<<" ";
   if((vec4[i]*2==vec4[i+1])||(vec4[i+1]%3==0)) continue;
   fg=1;
   vec4.clear();
 }
 cout<<endl;
 if(fg==1){
   sort(vec23.begin(),vec23.end(),greater<int>());
   for(i=0;i<vec3.size();i++) vec4.push_back(vec3[i]);
   for(i=0;i<vec23.size();i++) vec4.push_back(vec23[i]);
   for(i=0;i<vec2.size();i++) vec4.push_back(vec2[i]);
 }
 for(i=0;i<vec4.size();i++) cout<<vec4[i]<<" ";

return 0;
}
