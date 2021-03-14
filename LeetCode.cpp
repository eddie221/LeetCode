#include <iostream>
#include <math.h>

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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* before_rev_list = nullptr, * after_rev_list = nullptr, * r_head = head;
        ListNode* rev_start = nullptr, * rev_end = nullptr, * rev_first = nullptr;
        if (m != 1) {
            for (int i = 1; i < m; i++) {
                if (i == m - 1) {
                    before_rev_list = r_head;
                }
                r_head = r_head->next;
                rev_first = r_head;
            }
        }
        else {

            before_rev_list = nullptr;
            rev_first = r_head;
        }


        for (int i = m; i < n; i++) {
            rev_end = r_head->next;
            r_head->next = rev_start;
            rev_start = r_head;
            r_head = rev_end;
            if (i == n - 1) {
                if (m != 1) {
                    before_rev_list->next = r_head;
                    after_rev_list = r_head->next;
                    r_head->next = rev_start;
                    rev_first->next = after_rev_list;
                }
                else {
                    head = r_head;
                    after_rev_list = r_head->next;
                    r_head->next = rev_start;
                    rev_first->next = after_rev_list;
                }
            }
        }
        return head;
    }
};

int main()
{
    Solution s;
    ListNode* five = new ListNode(5);
    ListNode* four = new ListNode(4, five);
    ListNode* three = new ListNode(3, four);
    ListNode* two = new ListNode(2, three);
    ListNode* one = new ListNode(1, two);
    cout << s.reverseBetween(one, 2, 4);
}

