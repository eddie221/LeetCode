#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 1;
        int j = 1;
        for (; i < name.size();i++, j++) {
            if (name[i - 1] == typed[j - 1]) {
                int name_c = 1;
                int typed_c = 1;
                while (name[i] == name[i - 1] && i < name.size()) {
                    name_c++;
                    i++;
                }
                while (typed[j] == typed[j - 1] && j < typed.size()) {
                    typed_c++;
                    j++;
                }
                if (name_c > typed_c) {
                    return false;
                }
            }
            else {
                return false;
            }
        }
        
        if (name[i - 1] != typed[j - 1]) {
            return false;
        }
        if (i < name.size() || j < typed.size()) {
            int name_c = 1;
            int typed_c = 1;
            while (i < name.size() && name[i] == name[i - 1]) {
                name_c++;
                i++;
            }
            while (j < typed.size() && typed[j] == typed[j - 1]) {
                typed_c++;
                j++;
            }
            if (name_c > typed_c || j != typed.size()) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isLongPressedName("vtkgn", "vttkgnn");
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
    /*vector<int> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.smallerNumbersThanCurrent(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

