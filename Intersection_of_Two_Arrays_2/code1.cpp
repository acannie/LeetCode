#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    priority_queue<int> q1;
    priority_queue<int> q2;

    for (auto n : nums1)
    {
        q1.push(n);
    }

    for (auto n : nums2)
    {
        q2.push(n);
    }

    vector<int> ans;

    while (!q1.empty() && !q2.empty())
    {
        if (q1.top() == q2.top())
        {
            ans.emplace_back(q1.top());
            q1.pop();
            q2.pop();
        }
        else if (q1.top() < q2.top())
        {
            q1.pop();
        }
        else
        {
            q2.pop();
        }
    }

    return 0;
}