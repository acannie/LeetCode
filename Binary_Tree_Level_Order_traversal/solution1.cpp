#include <bits/stdc++.h>
using namespace std;

//efinition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    //     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
    {
        return ans;
    }

    queue<TreeNode *> que;
    que.push(root);

    int i_vec = 0;
    int loop_num = 1;

    while (!que.empty())
    {
        int loop_num_next = 0;

        ans.emplace_back(0);
        for (int i = 0; i < loop_num; i++)
        {
            ans.at(i_vec).emplace_back(que.front()->val);

            if (que.front()->left != NULL)
            {
                que.push(que.front()->left);
                loop_num_next++;
            }
            if (que.front()->right != NULL)
            {
                que.push(que.front()->right);
                loop_num_next++;
            }

            que.pop();
        }
        i_vec++;
        loop_num = loop_num_next;
    }

    return ans;
}

int main()
{
    TreeNode *node2 = new TreeNode();
    node2->left = NULL;
    node2->right = NULL;
    node2->val = 2;

    TreeNode *node1 = new TreeNode();
    node1->left = node2;
    node1->right = NULL;
    node1->val = 1;

    levelOrder(node1);

    return 0;
}
