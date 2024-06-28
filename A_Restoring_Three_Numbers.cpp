#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums(4);
    for(int i=0;i<4;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<3;i++){
        cout<<nums[3]-nums[i]<<" ";
    }
}