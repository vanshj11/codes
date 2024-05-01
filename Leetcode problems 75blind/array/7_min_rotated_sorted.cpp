#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums){
    int ans = nums[0];
    int low=0, high=nums.size()-1;
    if(nums[low] < nums[high]){
        return nums[low];
    }

    while(low<=high){
        if(nums[low] < nums[high]){
            ans = min(ans, nums[low]);
            break;
        }   
        int mid = (high+low) /2;
        ans = min(ans, nums[mid]);
        if(nums[mid] >= nums[low]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    cout<<findMin(nums);

    return 0;
}