#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs){
    unordered_map<string, vector<string>> map;
    vector<string> str;
    vector<vector<string>> result;

    for(auto x: strs){
        string key = x;
        sort(key.begin(), key.end());
        map[key].push_back(x);
    }

    for(auto x: map){
        result.push_back(x.second);
    }

    return result;
}

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> result = groupAnagrams(strs);

    for(auto x: result){
        for(auto y: x){
            cout<<y<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}