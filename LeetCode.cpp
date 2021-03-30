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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* r = head;
        if (r == nullptr) {
            return head;
        }
        while (r->val == val) {
            r = r->next;
            if (r == nullptr) {
                return r;
            }
        }
        head = r;
        while (r->next != nullptr) {
            if (r->next->val == val) {
                r->next = r->next->next;
            }
            else {
                r = r->next;
            }
        }
        return head;
    }
};

int main()
{
    Solution s;
    ListNode* six2 = new ListNode(6);
    ListNode* five = new ListNode(5, six2);
    ListNode* four = new ListNode(4, five);
    ListNode* three = new ListNode(3, four);
    ListNode* six1 = new ListNode(6, three);
    ListNode* two = new ListNode(2, six1);
    ListNode* one = new ListNode(1, two);
    ListNode* r = s.removeElements(nullptr, 6);
    while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
    /*vector<double> result;
    result = s.averageOfLevels(five);
    for (double r : result) {
        cout << r << endl;
    }*/
}

