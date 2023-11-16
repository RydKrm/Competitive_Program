 #include<iostream>
 using namespace std;
 int main(){
 double n,k,s=1,sum=0,count=-1;
 int ary[100],i;
 cin>>n>>k;

 for(i=0;i<n;i++){
    cin>>ary[i];
    sum += ary[i];
 }
 if(sum==n){
    cout<<"0"<<endl;
    goto down;
 }
 while(1){
    if(s>(k-0.5)){
        cout<<count<<endl;
        break;
    }
    else{
        sum += k;
        n++;
        s = sum/n;   // cout<<" s = "<<s<<endl;
        count++;
                     // cout<<"Loop testing"<<endl;
    }

 }

 down:
return 0;
}

