#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string s){
    int i=0, j=s.size()-1;

    while(i<j){
        if(!isalnum(s[i])) i++;
        else if(!isalnum(s[j])) j--;
        else{
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
    }

    return true;
}

int main(){
    string s = "0P";

    cout<<isPalindrom(s);

    return 0;
}