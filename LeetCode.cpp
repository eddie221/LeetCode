#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        while (num > 0) {
            int tmp = 0;
            if (num / 1000 != 0) {
                tmp = num / 1000;
                for (int i = 0; i < num / 1000; i++) {
                    result = result + "M";
                }
                num = num % 1000;

            }
            else if (num / 100 != 0) {
                tmp = num / 100;
                if (tmp == 9) {
                    result = result + "CM";
                }
                else{
                    if (tmp >= 5) {
                        result = result + "D";
                        for (int i = 0; i < tmp - 5; i++) {
                            result = result + "C";
                        }
                    }
                    else {
                        if (tmp == 4) {
                            result = result + "CD";
                        }
                        else {
                            for (int i = 0; i < tmp; i++) {
                                result = result + "C";
                            }
                        }
                        
                    }
                    
                }
                num = num % 100;
            }
            else if (num / 10 != 0) {
                tmp = num / 10;
                if (tmp == 9) {
                    result = result + "XC";
                }
                else {
                    if (tmp >= 5) {
                        result = result + "L";
                        for (int i = 0; i < tmp - 5; i++) {
                            result = result + "X";
                        }
                    }
                    else {
                        if (tmp == 4) {
                            result = result + "XL";
                        }
                        else {
                            for (int i = 0; i < tmp; i++) {
                                result = result + "X";
                            }
                        }
                        
                    }
                }
                num = num % 10;
            }
            else {
                tmp = num;
                if (tmp == 9) {
                    result = result + "IX";
                }
                else {
                    if (tmp >= 5) {
                        result = result + "V";
                        for (int i = 0; i < tmp - 5; i++) {
                            result = result + "I";
                        }
                    }
                    else {
                        if (tmp == 4) {
                            result = result + "IV";
                        }
                        else {
                            for (int i = 0; i < tmp; i++) {
                                result = result + "I";
                            }
                        }

                    }
                }
                num = num % 1;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    
    cout << s.intToRoman(11);
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

