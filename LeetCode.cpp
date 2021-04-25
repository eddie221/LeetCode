#include <iostream>
#include <vector>
#include <stack>

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
    TreeNode* sortedArrayToBST(vector<int>::iterator start, vector<int>::iterator end) {
        int len = end - start;
        if (len == 0) {
            return nullptr;
        }
        else {
            return new TreeNode(*(start + len / 2), sortedArrayToBST(start, start + len / 2), sortedArrayToBST(start + len / 2, end));
        }
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums.begin(), nums.end());
        /*if (nums.size() == 0) {
            return nullptr;
        }
        TreeNode* head = new TreeNode(nums[int(nums.size() / 2)]);
        if (nums.size() == 2) {
            TreeNode* tmp = new TreeNode(nums[int(nums.size() / 2 - 1)]);
            head->left = tmp;
        }
        else {
            vector<int> left;
            vector<int> right;
            left.reserve(nums.size() / 2);
            left.insert(left.end(), nums.begin(), nums.begin() + nums.size() / 2);
            right.reserve(nums.size() / 2);
            right.insert(right.end(), nums.begin() + nums.size() / 2 + 1, nums.end());
            TreeNode* right_tree = sortedArrayToBST(right);
            TreeNode* left_tree = sortedArrayToBST(left);
            head->left = left_tree;
            head->right = right_tree;
        }
        return head;*/
    }
    
};

int main()
{
    Solution s;
    vector<int> nums = {-10, -3, 0, 5, 9};
    TreeNode* r = s.sortedArrayToBST(nums);
    stack<TreeNode*> container;
    container.push(r);
    while (container.size() != 0) {
        TreeNode* t = container.top();
        container.pop();
        if (t != nullptr) {
            cout << t->val << " ";
            container.push(t->left);
            container.push(t->right);
        }
        else {
            cout << "nullptr" << " ";
        }

    }
   /* vector<bool> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.intToRoman(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

