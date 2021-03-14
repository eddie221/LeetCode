#include <iostream>
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
    ListNode* reverseList(ListNode* head) {
        ListNode* front = nullptr;
        ListNode* back = nullptr;
        while (head != nullptr && head->next != nullptr) {
            back = head->next;
            head->next = front;
            front = head;
            head = back;

        }
        if (back != nullptr) {
            back->next = front;
            return back;
        }
        else {
            return head;
        }
    }
};

int main()
{
    Solution s;
    ListNode* two = new ListNode(2);
    ListNode* one = new ListNode(1, two);

    cout << s.reverseList(one);
}

