#include <iostream>
#include <vector>
#include <stack>

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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr1 = head, * ptr2 = head;
        bool odd = true;
        while (ptr2->next != nullptr) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next->next;
            if (ptr2 == nullptr) {
                odd = false;
                break;
            }
        }
        ptr2 = reverse(ptr1);
        
        while (head != ptr1) {
            if (head->val != ptr2->val) {
                return false;
            }
            head = head->next;
            ptr2 = ptr2->next;
        }
        return true;
    }
    ListNode* reverse(ListNode* head) {
        ListNode* last = nullptr, * next;
        while (head != nullptr) {
            next = head->next;
            head->next = last;
            if (next == nullptr) {
                head->next = last;
                return head;
            }
            last = head;
            head = next;
        }
        head->next = last;
        return head;
    }
};

int main()
{
    Solution s;
    ListNode* one = new ListNode(1, new ListNode(2, new ListNode(2, new ListNode(1))));
    cout << s.isPalindrome(one);

   /* vector<bool> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.intToRoman(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

