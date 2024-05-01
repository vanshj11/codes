#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    if(s.size()%2!=0) return false;

    stack<char> st;

    for(char c: s){
        if(c=='(' || c=='[' || c=='{') st.push(c);
        else {
            if(st.empty() || 
                (c==')' && st.top()!='(') ||
                (c=='}' && st.top()!='{') ||
                (c==']' && st.top()!='[')
            ) return false;
            st.pop();
        }
    }

    return st.empty();
}

int main(){
    string s1 = "()[]{}";
    string s2 = "(]";

    cout<<isValid(s1)<<"\n"<<isValid(s2);

    return 0;
}