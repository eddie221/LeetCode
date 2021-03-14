#include <iostream>


struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result_head = new ListNode(0);
        ListNode* result = result_head;
        ListNode* dummy1 = l1;
        ListNode* dummy2 = l2;
        int carry = 0, x = 0, y = 0;
        while (dummy1 != NULL || dummy2 != NULL) {
            if (dummy1 != NULL) {
                x = dummy1->val;
                dummy1 = dummy1->next;
            }
            else {
                x = 0;
            }
            if (dummy2 != NULL) {
                y = dummy2->val;
                dummy2 = dummy2->next;
            }
            else {
                y = 0;
            }
            int sum = carry + x + y;
            carry = int(sum / 10);
            result->next = new ListNode(sum % 10);
            result = result->next;
        }
        if (carry != 0) {
            result->next = new ListNode(carry);
        }
        return result_head->next;
    }
};

int main()
{
    Solution s;
    ListNode* three_1 = new ListNode(3);
    ListNode* four_1 = new ListNode(4, three_1);
    ListNode* two_1 = new ListNode(2, four_1);

    ListNode* four_2 = new ListNode(4);
    ListNode* six_2 = new ListNode(6, four_2);
    ListNode* five_2= new ListNode(5, six_2);
    s.addTwoNumbers(two_1, five_2);
}

