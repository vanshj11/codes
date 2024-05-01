#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums){
    int product = 1;
    int n = nums.size();
    vector<int> result(n);
    vector<int> left_product(n);
    vector<int> right_product(n);

    left_product[0] = 1;
    right_product[n-1] = 1;

    for(int i=1; i<n; i++){
        left_product[i] = left_product[i-1] * nums[i-1];
        right_product[n-i-1] = right_product[n-i] * nums[n-i];
    }
    for(int i=0; i<n; i++){
        result[i] = left_product[i] * right_product[i];
    }
    return result;
}

int main(){
    vector<int> nums{1, 2, 3, 4};

    vector<int> result = productExceptSelf(nums);

    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<"\t";
    }

    return 0;
}