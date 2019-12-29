#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> hash;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int numberToFind = target - nums[i];
            
            if(hash.find(numberToFind) != hash.end())
            {
                ans.emplace_back(i);
                ans.emplace_back(hash[numberToFind]);
                return ans;
            }
        }
        
        /*
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ans.emplace_back(i);
                    ans.emplace_back(j);
                    return ans;
                }
            }
        }
        */
        
        return ans;
    }
};