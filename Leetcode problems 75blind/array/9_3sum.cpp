#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int>& nums){
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size()-2; i++){
        if(i!=0 && nums[i]==nums[i-1]) continue;
        
        int j=i+1,k=nums.size()-1;
        while(j<k){
            int currSum = nums[i]+nums[j]+nums[k];
            if(currSum == 0){
                vector<int> temp = {nums[i], nums[j], nums[k]};
                result.push_back(temp);
                temp.clear();
                j+=1;
                k-=1;
                while(j<k && nums[j]==nums[j-1]) j+=1;
                while(j<k && nums[k]==nums[k+1]) k-=1;
            }
            else if(currSum<0){
                j+=1;
                while(j<k && nums[j]==nums[j-1]) j+=1;
            }
            else{
                k-=1;
                while(j<k && nums[k]==nums[k+1]) k-=1;
            }
        }
    }
    return result;
}

int main(){
    vector<int> nums = {0,1,1};

    vector<vector<int>> result = threesum(nums);
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<3; j++){
            cout<<result[i][j]<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}