#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> charSet;
    int left=0;
    int maxLength=0;
    int n = s.length();
    for(int right=0; right<n; right++){
        if(charSet.count(s[right])==0){
            charSet.insert(s[right]);
            maxLength = max(maxLength, right-left+1);
        }
        else{
            while(charSet.count(s[right])!=0){
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[right]);
        }
    }
    return maxLength;
}

int main(){
    string s = "ABAAA";

    cout<<lengthOfLongestSubstring(s);

    return 0;
}