#include<bits/stdc++.h>
using namespace std;

int countSubstrings(string s){
    int count=0;
    for(int i=0; i<s.size(); i++){
        int left=i, right=i;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
            count++;
        }
        left=i-1, right=i;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
            count++;
        }
    }
    return count;
}

int main(){
    string s="babad";

    cout<<countSubstrings(s);

    return 0;
}