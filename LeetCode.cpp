#include <iostream>
#include <vector>

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
    vector<double> averageOfLevels(TreeNode* root) {
        double tmp = 0;
        vector<TreeNode*> layerN_node;
        vector<int> layer_record = {0};
        vector<double> result;
        int layer = 0, layer_node_count = 0;

        layerN_node.push_back(root);
        for (int i = 0; i < layerN_node.size(); i++) {
            if (layerN_node[i] != nullptr) {
                layerN_node.push_back(layerN_node[i]->left);
                layer_record.push_back(layer_record[i] + 1);
                layerN_node.push_back(layerN_node[i]->right);
                layer_record.push_back(layer_record[i] + 1);
            }
            if (layer == layer_record[i]) {
                if (layerN_node[i] != nullptr) {
                    tmp += layerN_node[i]->val;
                    layer_node_count++;
                }
            }
            else {
                result.push_back(tmp / double(layer_node_count));
                if (layerN_node[i] != nullptr) {
                    tmp = layerN_node[i]->val;
                    layer_node_count = 1;
                }
                else {
                    tmp = 0;
                    layer_node_count = 0;
                }
                layer++;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    /*TreeNode* nine = new TreeNode(9);
    TreeNode* fifteen = new TreeNode(15);
    TreeNode* seven = new TreeNode(7);
    TreeNode* twenty = new TreeNode(20, fifteen, seven);
    TreeNode* three = new TreeNode(3, nine, twenty);*/
    TreeNode* one = new TreeNode(1);
    TreeNode* fourteen = new TreeNode(14, one, nullptr);
    TreeNode* five = new TreeNode(5, fourteen, nullptr);
    //cout << s.averageOfLevels(3);
    vector<double> result;
    result = s.averageOfLevels(five);
    for (double r : result) {
        cout << r << endl;
    }
}

