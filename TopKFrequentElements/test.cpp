#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    function<bool(const pair<int, int> &, const pair<int, int> &)> f = [](const pair<int, int> &l, const pair<int, int> &r) { return (l.second > r.second) || ((l.second == r.second) && (l.first > r.first)); };
    priority_queue<int>  pr;

    for (auto n : nums)
    {
        pr.push(n);
    }

    // vector<int> ans;

    // for (int i = 0; i < k; i++)
    // {
    //     ans.emplace_back(n.top().first);
    //     pr.pop();
    // }

    return 0;
}
