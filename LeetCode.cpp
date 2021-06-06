#include <iostream>
#include <string>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),right(right) {}
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return 1;
        }
        else {
            int left = INT_MAX, right = INT_MAX;
            if (root->left != nullptr) {
                left = minDepth(root->left) + 1;
            }
            if (root->right != nullptr) {
                right = minDepth(root->right) + 1;
            }
            cout << "left : " << left << " right : " << right << endl;
            return min(left, right);
        }
        return 0;
    }
};

int main()
{
    Solution s;
    TreeNode* head = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
    cout << s.minDepth(head) << endl;
    TreeNode* head2 = nullptr;
    cout << s.minDepth(head2) << endl;
    TreeNode* head3 = new TreeNode(3, new TreeNode(9, new TreeNode(20, new TreeNode(15, new TreeNode(7), nullptr), nullptr), nullptr), nullptr);
    cout << s.minDepth(head3) << endl;
    TreeNode* head4 = new TreeNode(3, new TreeNode(2, new TreeNode(4), new TreeNode(5)), new TreeNode(3));
    cout << s.minDepth(head4) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}