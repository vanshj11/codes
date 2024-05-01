#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> numSet;
    for (int i = 0; i < nums.size(); i++)
    {
        if (numSet.find(nums[i]) != numSet.end())
        {
            return true;
        }
        numSet.insert(nums[i]);
    }
    return false;
}

int main()
{

    return 0;
}