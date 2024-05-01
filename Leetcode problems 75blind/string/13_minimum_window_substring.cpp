#include<bits/stdc++.h>
using namespace std;

string minWindow(string s, string t){
    unordered_map<char, int> tmap;

    for(int i=0; i<t.size(); i++){
        tmap[t[i]]++;
    }

    int count=tmap.size();
    int begin=0, end=0, d=INT_MAX, head=0;

    while(end<s.size()){
        if(tmap[s[end]] > 0){
            count--;
        }
        tmap[s[end]]--;
        end++;

        while(count==0){
            if(end-begin < d){
                head=begin;
                d=end-head;
            }
            if(tmap[s[begin]]==0){
                count++;
            }
            tmap[s[begin]]++;
            begin++;
        }
    }

    if(d==INT_MAX){
        return "";
    }
    return s.substr(head, d);
}

int main(){
    string s="DOBECODEBANC";
    string t="ABC";

    cout<<minWindow(s,t);

    return 0;
}