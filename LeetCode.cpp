#include <iostream>
#include <stack>
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
    TreeNode* searchBST(TreeNode* root, int val) {
        std::stack<TreeNode*> container;
        TreeNode* recent_node = root;
        int step = 0;
        container.push(recent_node);
        do {
            //std::cout << "-----" << std::endl;
            if (recent_node->val == val) {
                //std::cout << "r_val : " << recent_node->val << std::endl; 
                return recent_node;
            }
            else {
                //std::cout << "c top 1 : " << container.top()->val << std::endl; 
                //std::cout << "r_val : " << recent_node->val << std::endl;
                container.pop();
                if (recent_node->right != nullptr) {
                    container.push(recent_node->right);
                    //std::cout << "r_right : " << recent_node->right->val << std::endl;
                }
                if (recent_node->left != nullptr) {
                    container.push(recent_node->left);
                    //std::cout << "r_left : " << recent_node->left->val << std::endl;
                }
                if (!container.empty()) {
                    recent_node = container.top();
                }

            }
        } while (!container.empty());
        //!container.empty() || step >= 3
        return NULL;
    }
};

int main()
{
    Solution s;
    TreeNode* one = new TreeNode(1);
    TreeNode* three = new TreeNode(3);
    TreeNode* two = new TreeNode(2, one, three);
    TreeNode* seven = new TreeNode(7);
    TreeNode* four = new TreeNode(4, two, seven);
    s.searchBST(four, 2);
}

