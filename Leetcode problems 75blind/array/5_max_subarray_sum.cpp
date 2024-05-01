#include<bits/stdc++.h>
using namespace std;

void maxSubarraySum(vector<int>& nums){
    int maxSum = INT_MIN;
    int sum=0;
    int start=-1, end=-1;
    for(int i=0; i<nums.size(); i++){
        if(sum==0){
            start=i;
        }
        sum+=nums[i];
        if(sum > maxSum){
            maxSum = sum;
            end = i;
        }
        sum = sum<0 ? 0: sum;
    }

    if(start>-1){
        for(int i=start; i<end+1; i++){
            cout<<nums[i]<<"\t";
        }
    }

    maxSum = maxSum < 0 ? 0: maxSum;
    cout << "\n" << maxSum;
}

int main(){
    vector<int> nums = {5,4,-1,7,8};

    maxSubarraySum(nums);

    return 0;
}