#include <iostream>
#include <vector>
#include <float.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reorderSpaces(string text) {
        int count = 0;
        vector<string> str_list;
        string tmp = "";
        for (int i = 0; i < text.length(); i++) {
            if (text[i] == ' ') {
                count++;
                if (tmp != "") {
                    str_list.push_back(tmp);
                }
                tmp = "";
            }
            else {
                tmp = tmp + text[i];
            }
        }
        if (tmp != "") {
            str_list.push_back(tmp);
        }
        int space, left;
        if (str_list.size() != 1) {
            space = count / (str_list.size() - 1);
            left = count % (str_list.size() - 1);
        }
        else {
            space = 0;
            left = count;
        }
        string result = "";
        for (int i = 0; i < str_list.size() - 1; i++) {
            result = result + str_list[i];
            cout << str_list[i] << endl;
            for (int j = 0; j < space; j++) {
                result = result + ' ';
            }
        }
        result = result + str_list.back();
        for (int i = 0; i < left; i++) {
            result = result + ' ';
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 3,6,1,0 };
    cout << s.reorderSpaces("  this   is  a sentence ") << endl;
    cout << s.reorderSpaces(" practice   makes   perfect") << endl;
    cout << s.reorderSpaces("hello   world") << endl;
    cout << s.reorderSpaces("  walks  udp package   into  bar a") << endl;
    cout << s.reorderSpaces("a") << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}