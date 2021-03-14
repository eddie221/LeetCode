#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        std::map<int, int> record;
        int max = 0;
        int max_key = 0;
        for (int i = 0; i < A.size(); i++) {
            if (record.find(A[i]) == record.end()) {
                record[A[i]] = 1;
            }
            else {
                record[A[i]] += 1;
            }
        }
        for (std::map<int, int>::iterator it = record.begin(); it != record.end(); it++) {
            if (it->second > max) {
                max = it->second;
                max_key = it->first;
            }
            //std::cout << it->first << " : " << it->second << std::endl;
        }
        return max_key;
    }
};

int main()
{
    Solution s;
    vector<int> arr = { 1,2,3,3 };
    cout << s.repeatedNTimes(arr);
}

