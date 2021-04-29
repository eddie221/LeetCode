#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* A = headA, * B = headB;
        while (A != B) {
            if (A == nullptr) {
                A = headB;
            }
            else {
                A = A->next;
            }
            if (B == nullptr) {
                B = headA;
            }
            else {
                B = B->next;
            }
        }
        return A;
    }
};

int main()
{
    Solution s;
    ListNode* intersection2 = new ListNode(4);
    ListNode* intersection1 = new ListNode(8);
    intersection1->next = intersection2;
    ListNode* A_1 = new ListNode(4);
    ListNode* A_2 = new ListNode(1);
    A_1->next = A_2;
    //A_2->next = intersection1;

    ListNode* B_1 = new ListNode(5);
    ListNode* B_2 = new ListNode(6);
    ListNode* B_3 = new ListNode(1);
    B_1->next = B_2;
    B_2->next = B_3;
    //B_3->next = intersection1;
    cout << s.getIntersectionNode(A_1, B_1)->val;

    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}