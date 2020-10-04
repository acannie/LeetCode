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
    
    function<bool(const int &, const int &)> f = [&found](const int &l, const int &r) { return ((found.at(l) < found.at(r)) || (found.at(l) == found.at(r)) && (l < r)); };
    set<int, function<bool(const int &, const int &)>> st(f);

    for (auto num : nums)
    {
        st.insert(num);
    }

    vector<int> ans;

    auto it = st.rbegin();
    for (int i = 0; i < k; i++)
    {
        ans.emplace_back(*it);
        it++;
    }

    for (auto num : ans)
    {
        cout << num << endl;
    }

    return 0;
}
