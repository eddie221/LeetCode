#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* r_result = result;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                ListNode* tmp = new ListNode(l1->val);
                r_result->next = tmp;
                l1 = l1->next;
            }
            else {
                ListNode* tmp = new ListNode(l2->val);
                r_result->next = tmp;
                l2 = l2->next;
            }
            r_result = r_result->next;
        }
        if (l1 != nullptr) {
            r_result->next = l1;
        }
        if (l2 != nullptr) {
            r_result->next = l2;
        }
        return result->next;
    }
};

int main()
{
    Solution s;
    ListNode* four_1 = new ListNode(4);
    ListNode* two_1 = new ListNode(2, four_1);
    ListNode* one_1 = new ListNode(1, two_1);

    ListNode* four_2 = new ListNode(4);
    ListNode* three_2 = new ListNode(3, four_2);
    ListNode* one_2 = new ListNode(1, three_2);
    s.mergeTwoLists(one_1, one_2);
}

