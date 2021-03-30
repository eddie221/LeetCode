#include <iostream>

using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        char max = '0';
        for (int i = 0; i < n.length(); i++) {
            if (n[i] > max) {
                max = n[i];
            }
        }
        return max - 48;
    }
};

int main()
{
    Solution s;
    cout << s.minPartitions("27346209830709182346");
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

