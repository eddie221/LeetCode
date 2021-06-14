#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    map<int, int> count;
    void bfs(TreeNode* root) {
        if (root != nullptr) {
            count[root->val]++;
        }
        if (root->left != nullptr) {
            bfs(root->left);
        }
        if (root->right != nullptr) {
            bfs(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        if (root != nullptr) {
            count[root->val]++;
        }
        if (root->left != nullptr) {
            findMode(root->left);
        }
        if (root->right != nullptr) {
            findMode(root->right);
        }
        vector<int> result;
        int max = 0;
        for (map<int, int>::iterator iter = count.begin(); iter != count.end(); iter++) {
            if (max < iter->second) {
                max = iter->second;
                result.clear();
                result.push_back(iter->first);
            }
            else if (max == iter->second) {
                result.push_back(iter->first);
            }
        }
        return result;
    }
};
int main()
{
    Solution s;
    TreeNode* head = new TreeNode(1, nullptr, new TreeNode(2, new TreeNode(2), nullptr));
    vector<int> result = s.findMode(head);
    for (int r : result) {
        cout << r << endl;
    }
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}