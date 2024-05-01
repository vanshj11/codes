#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int> arr, int n, int k){
    if(n<k){
        cout<<"invalid";
        return -1;
    }

    int max_sum=0;

    for(int i=0; i<k; i++){
        max_sum+=arr[i];
    }

    for(int i=k; i<n; i++){
        int window_sum = max_sum + arr[i] - arr[i-k];
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main(){
    int n, k;
    vector<int> arr;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"\nEnter array elements: ";

    for(int i=0; i<n; i++){
        int in;
        cin>>in;
        arr.push_back(in);
    }

    cout<<"\nEnter no of consecutive elements to check: ";
    cin>>k;

    cout<<"\nMaximum sum of "<<k<<" consecutive elements is: "<<maxSum(arr, n, k);

    return 0;
}