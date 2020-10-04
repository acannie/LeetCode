#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> nums{1, 1, 1, 2, 2, 3};
    // int k = 2;

    // unordered_map<int, int> found;
    // vector<int> ans;

    // for (auto num : nums)
    // {
    //     if (found.find(num) == found.end())
    //     {
    //         found.insert(make_pair(num, 0));
    //     }
    //     found.at(num)++;
    // }

    // //sort found by second
    // sort(found.begin(), found.end(), [](pair<int, int> &l, pair<int, int> &r) { return l.second < r.second; });

    // auto start = found.begin();
    // for (int i = 0; i < k; i++)
    // {
    //     ans.emplace_back((*next(start, i)).first);
    // }

    // for (auto output : ans)
    // {
    //     cout << output << endl;
    // }

    //vector<int> nums{1, 1, 1, 2, 2, 3};

    auto f = [](const int &lhs, const int &rhs) { return lhs > rhs; };
    
    set<int, std::function<bool(const int &, const int &)>> nums(f);
    nums.insert(1);
    nums.insert(1);

    for (auto str : words)
    {
        std::cout << str << std::endl;
    }
}