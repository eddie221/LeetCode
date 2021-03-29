#include <iostream>
#include <vector>
#include <algorithm>

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* recent = head;
        if (head == nullptr) {
            return head;
        }
        while (recent->next != nullptr) {
            if(recent->val == recent->next->val){
                recent->next = recent->next->next;
            }
            else {
                recent = recent->next;
            }
        }
        return head;
    }
};

int main()
{
    Solution s;
    ListNode* three2 = new ListNode(3);
    ListNode* three1 = new ListNode(3, three2);
    ListNode* two = new ListNode(2, three1);
    ListNode* one2 = new ListNode(1, two);
    ListNode* one1 = new ListNode(1, one2);
    ListNode* r = s.deleteDuplicates(one1);
    while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }
    /*vector<double> result;
    result = s.averageOfLevels(five);
    for (double r : result) {
        cout << r << endl;
    }*/
}

