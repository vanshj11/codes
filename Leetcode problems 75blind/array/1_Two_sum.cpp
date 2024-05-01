#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> numToIndex;
    for(int i=0; i<nums.size(); i++){
        int comp = target - nums[i];
        if(numToIndex.find(comp)!=numToIndex.end()){
            return {numToIndex[comp], i};
        }
        numToIndex[nums[i]] = i;
    }
    return {};
}

int main(){
    int n;
    vector<int> nums;
    vector<int> result;
    int target;

    cout<<"Enter array size : ";
    cin>>n;

    cout<<"Input array: ";

    for(int i=0; i<n; i++){
        int in;
        cin>>in;
        nums.push_back(in);
    }

    cout<<"\nEnter target: ";
    cin>>target;

    result = twoSum(nums, target);

    cout<<result[0]<<" "<<result[1];
}