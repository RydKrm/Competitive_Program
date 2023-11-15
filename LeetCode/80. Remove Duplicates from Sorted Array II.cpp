#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums;
    vector<int> ans;
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>k;
        nums.push_back(k);
    }
    ans.push_back(nums[0]);
    int cnt = 1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            cnt=1;
            ans.push_back(nums[i]);
        } else if(nums[i]==nums[i-1] && cnt<2){
            //cout<<"cnt "<<cnt<<endl;
            cnt++;
            ans.push_back(nums[i]);
          // cout<<"test "<<nums[i]<<endl;
        }

    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
