#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* last = head, * del_node = head, *previous = nullptr;
        if (head->next == nullptr) {
            return nullptr;
        }
        for (int i = 1; i < n; i++) {
            last = last->next;
        }

        while (last->next != nullptr) {
            previous = del_node;
            del_node = del_node->next;
            last = last->next;
        }
        if (previous == nullptr) {
            return head->next;
        }
        previous->next = previous->next->next;
        return head;
    }
};

int main()
{
    Solution s;
    ListNode* head = new ListNode(1, new ListNode(2));//, new ListNode(3, new ListNode(4, new ListNode(5)))
    ListNode* head2 = s.removeNthFromEnd(head, 2);
    while (head2 != nullptr) {
        cout << head2->val << endl;
        head2 = head2->next;
    }
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}