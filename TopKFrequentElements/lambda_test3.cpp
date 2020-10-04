#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums{1, 2};
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

    function<bool(const pair<int, int> &, const pair<int, int> &)> f = [](const pair<int, int> &l, const pair<int, int> &r) { return (l.second < r.second) || ((l.second == r.second) && (l.first < r.first)); };
    vector<pair<int,int>> v(found.begin(), found.end());

    sort(v.begin(), v.end(),f);


    vector<int> ans;

    auto it = v.rbegin();
    for (int i = 0; i < k; i++)
    {
        ans.emplace_back((*it).first);
        it++;
    }

    for (auto num : ans)
    {
        cout << num << endl;
    }

    return 0;
}
