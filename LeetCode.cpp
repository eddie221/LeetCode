#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int maxUncrossedLines(std::vector<int>& A, std::vector<int>& B) {
        int m = A.size(), n = B.size();
        int** result = new int*[m + 1];
        for (int i = 0; i < m + 1; i++) {
            result[i] = new int[n + 1];
            for (int j = 0; j < n + 1; j++) {
                result[i][j] = 0;
            }
        }


        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (A[i - 1] == B[j - 1]) {
                    result[i][j] = result[i - 1][j - 1] + 1;
                    //cout << result[i][j] << endl;
                }
                else {
                    result[i][j] = std::max(result[i][j - 1], result[i - 1][j]);
                }
            }
        }
        return result[m][n];
    }
};

int main()
{
    Solution s;
    vector<int> A = { 1, 4, 2 };
    vector<int> B = { 1, 2, 4 };
    s.maxUncrossedLines(A, B);
}

