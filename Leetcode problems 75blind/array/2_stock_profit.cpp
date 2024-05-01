#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices){
    int profit = 0;
    int least = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < least)
        {
            least = prices[i];
        }
        if (profit < prices[i] - least)
        {
            profit = prices[i] - least;
        }
    }
    return profit;
}

int main(){
    
}