#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        //168ms solution
        // vector<int> ans;
        // for (int i = 0; i < nums.size() - 1; i++)
        // {
        //     for (int j = i + 1; j < nums.size(); j++)
        //     {
        //         if (nums[i] + nums[j] == target)
        //         {
        //             ans.emplace_back(i);
        //             ans.emplace_back(j);
        //             return ans;
        //         }
        //     }
        // }
        // return ans;

        //8ms solution
        vector<int> ans;
        unordered_map<int, int> mp;
        int i = 0;
        
        for(auto it = nums.begin(); it != nums.end(); it++) {
            if(mp.find(target - *it) != mp.end()) {
                ans.emplace_back(i);
                ans.emplace_back(mp.at(target - *it));
                return ans;   
            }
            mp.emplace(*it, i);
            i++;
        }
        
        ans.emplace_back(-1);
        return ans;
    }
};
