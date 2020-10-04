#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };

    bool hasCycle(ListNode *head)
    {
        unordered_set<ListNode> nodesSeen;
        for (int i = 0;; i++)
        {
            if (head == NULL)
            {
                return false;
            }

            if (nodesSeen.find(head) != nodesSeen.end())
            {
                return true;
            }
            else
            {
                nodeSeen.insert(head);
            }
            head = head.next;
        }
    }
};