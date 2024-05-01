#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    if(s.size()!=t.size()) return false;

    unordered_map<char, int> map;

    for(int i=0; i<s.size(); i++){
        map[s[i]]++;
    }

    for(int i=0; i<t.size(); i++){
        map[t[i]]--;
    }

    for(auto x: map){
        if(x.second!=0) return false;
    }

    return true;
}

int main(){
    string s="car", t="rat";

    cout<<isAnagram(s, t);

    return 0;
}