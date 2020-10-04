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
    set<pair<int, int>, function<bool(const pair<int, int> &, const pair<int, int> &)>> st(found.begin(), found.end(), f);

    for (pair<int, int> f : found)
    {
        st.emplace(f);
    }

    vector<int> ans;

    auto it = st.rbegin();
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