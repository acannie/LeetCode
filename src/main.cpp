#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.emplace_back(nums[i]);
                ans.emplace_back(nums[j]);
                return ans;
            }
        }
    }
}

int main()
{
    twoSum();
}