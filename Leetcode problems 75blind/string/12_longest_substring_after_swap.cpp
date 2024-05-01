#include<bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {
    unordered_map<char, int> charMap;
    int left=0;
    int maxLength=INT_MIN, maxf=0;

    for(int right=0; right<s.length(); right++){
        charMap[s[right]]++;
        maxf=max(maxf, charMap[s[right]]);

        if((right-left+1)-maxf > k){
            charMap[s[left]]--;
            left++;
        }
        else{
            maxLength=max(maxLength, right-left+1);
        }
    }
    
    return maxLength;
}

int main(){
    string s="AAAA";
    int k=0;

    cout<<characterReplacement(s,k);

    return 0;
}