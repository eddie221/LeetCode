#include <iostream>
#include <vector>

using namespace std;

class SubrectangleQueries {
public:
    vector<vector<int>>* rectangle;
    vector<vector<int>> changes;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        this->rectangle = &rectangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        changes.push_back({ row1, col1, row2, col2, newValue });
    }

    int getValue(int row, int col) {
        for (int i = changes.size() - 1; i >= 0; i--) {
            if (row >= changes[i][0] && row <= changes[i][2] && col >= changes[i][1] && col <= changes[i][3]) {
                return changes[i][4];
            }
        }
        return(*rectangle)[row][col];
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<vector<int>> rectangle = {{1, 2, 1}, { 4, 3, 4 }, { 3, 2, 1 }, { 1, 1, 1 }};
    SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
    obj->updateSubrectangle(0, 0, 3, 2, 5);
    int param_2 = obj->getValue(0, 2);
    cout << param_2 << endl;
    return 0;
}
