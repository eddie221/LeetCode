#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node, ListNode* head) {
        *node = *node->next;
    }
};

int main()
{
    Solution s;
    ListNode* nine = new ListNode(9);
    ListNode* one = new ListNode(1);
    one->next = nine;
    ListNode* five = new ListNode(5);
    five->next = one;
    ListNode* four = new ListNode(4);
    four->next = five;
    cout << "four : " << four << " " << four->next << endl;
    cout << "five : " << five << " " << five->next << endl;
    cout << "one : " << one << " " << one->next << endl;
    s.deleteNode(five, four);
    ListNode* r = four;

    
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
   /* vector<bool> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.intToRoman(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

