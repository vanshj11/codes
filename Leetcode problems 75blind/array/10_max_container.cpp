#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height){
    int maxArea=INT_MIN;
    int left=0, right=height.size()-1;
    while(left<right){
        int area=min(height[left],height[right]) * (right-left);
        maxArea=max(area, maxArea);
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return maxArea;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout<<maxArea(height);

    return 0;
}