#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    std::vector<int> addToArrayForm(std::vector<int>& A, int K) {
        std::vector<int> result;
        int carry = 0;
        for (int i = A.size() - 1; i >= 0 || K != 0 || carry != 0; i--) {
            if (i < 0) {
                // std::cout << i << " : " << K % 10 + carry << " ";
                result.push_back((K % 10 + carry) % 10);
                carry = (K % 10 + carry) / 10;
            }
            else {
                //std::cout << i << " : " << A[i] + K % 10 + carry << " ";
                result.push_back((A[i] + K % 10 + carry) % 10);
                carry = (K % 10 + A[i] + carry) / 10;
            }
            K = K / 10;
            //std::cout << "K : " << K << std::endl;
        }

        std::reverse(result.begin(), result.end());
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> arr = { 1,2,0,0 };
    s.addToArrayForm(arr, 34);
}

