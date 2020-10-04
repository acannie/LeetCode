#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    unordered_map<int, int> found;

    for (auto num : nums)
    {
        if (found.find(num) == found.end())
        {
            found.insert(make_pair(num, 0));
        }
        found.at(num)++;
    }

    function<bool(const int &, const int &)> f = [&found](const int &l, const int &r) { return ((found.at(l) > found.at(r)) || (found.at(l) == found.at(r)) && (l > r)); };
    priority_queue<int, vector<int>, decltype(f)> pr(f);

    for (auto fo : found)
    {
        pr.push(fo.first);
    }

    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        ans.emplace_back(pr.top());
        pr.pop();
    }
    
    return 0;
}
