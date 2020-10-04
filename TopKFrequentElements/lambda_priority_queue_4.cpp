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

    function<bool(const pair<int, int> &, const pair<int, int> &)> f = [](const pair<int, int> &l, const pair<int, int> &r) { return ((l.second > r.second) || (l.first == r.first) && (l > r)); };
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(f)> pr(f);

    for (auto fo : found)
    {
        pr.push(fo);
        if (pr.size() > k)
        {
            pr.pop();
        }
    }

    vector<int> ans;

    while (!pr.empty())
    {
        ans.emplace_back(pr.top().first);
        pr.pop();
    }

    return 0;
}
