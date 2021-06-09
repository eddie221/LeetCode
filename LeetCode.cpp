#include <iostream>
#include <vector>
#include <float.h>
#include <algorithm>

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
    int findSecondMinimumValue(TreeNode* root) {
        TreeNode* recent = root;
        if (root == nullptr || root->left == nullptr) {
            return -1;
        }
        int candidate = -1;
        while (recent->left != nullptr) {
            if (root->val == recent->left->val && root->val == recent->right->val) {
                int left_min = findSecondMinimumValue(recent->left), right_min = findSecondMinimumValue(recent->right);
                cout << "left_min : " << left_min << endl;
                cout << "right_min : " << right_min << endl;
                if (candidate == -1 && left_min != -1) {
                    candidate = left_min;
                }
                if (candidate == -1 && right_min != -1) {
                    candidate = right_min;
                }
                if (left_min != -1 && candidate != -1) {
                    candidate = min(candidate, left_min);
                }
                if (right_min != -1 && candidate != -1) {
                    candidate = min(candidate, right_min);
                }
                break;
            }
            else if (recent->left->val == root->val) {
                if (candidate > recent->right->val || candidate == -1) {
                    candidate = recent->right->val;
                }
                recent = recent->left;
            }
            else if (recent->right->val == root->val) {
                if (candidate > recent->left->val || candidate == -1) {
                    candidate = recent->left->val;
                }
                recent = recent->right;
            }
        }
        return candidate;
    }
};

int main()
{
    Solution s;
    TreeNode* head = new TreeNode(1, new TreeNode(1, new TreeNode(1), new TreeNode(2)), new TreeNode(1, new TreeNode(1), new TreeNode(7)));
    cout << s.findSecondMinimumValue(head) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}