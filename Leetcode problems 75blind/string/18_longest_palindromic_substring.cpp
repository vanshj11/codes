#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    string pal=s.substr(0,1);

    for(int i=1; i<s.size(); i++){
        int left=i, right=i;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        string oddPal=s.substr(left+1, right-left-1);

        left=i-1, right=i;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        string evenPal=s.substr(left+1, right-left-1);
        if(oddPal.size()>pal.size()) pal=oddPal;
        if(evenPal.size()>pal.size()) pal=evenPal;
    }
    return pal;
}

int main(){
    string s="bb";

    cout<<longestPalindrome(s);

    return 0;
}