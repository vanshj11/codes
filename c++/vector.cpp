#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<char>> board;

    for(int i=0; i<3; i++){
        vector<char> temp;
        for(int j=0; j<3; j++){
            char in;
            cin>>in;
            temp.push_back(in);
        }
        board.push_back(temp);
        temp.clear();
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<board[i][j];
        }
    }

    return 0;
}