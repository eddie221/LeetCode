#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> result;
        for (int i = 0; i < boxes.size(); i++) {
            result.push_back(0);
            for (int j = 0; j < boxes.size(); j++) {
                if (i != j && boxes[j] == '1') {
                    result[i] += abs(i - j);
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    s.minOperations("110");
}

