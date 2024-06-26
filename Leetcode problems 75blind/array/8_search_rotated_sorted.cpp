#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target){
    int low=0, high=nums.size()-1;
    while(low<=high){
        int mid = (high+low) /2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && target<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[high]>=target && target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target=6;

    cout<<search(nums, target);

    return 0;
}