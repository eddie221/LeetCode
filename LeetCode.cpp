#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (image[sr][sc] == newColor) {
            return image;
        }
        else {
            return floodFill(image, sr, sc, image[sr][sc], newColor);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int rr, int rc, int oldColor, int newColor) {
        image[rr][rc] = newColor;
        if (rr + 1 < image.size() && image[rr + 1][rc] == oldColor) {
            image = floodFill(image, rr + 1, rc, oldColor, newColor);
        }
        if (rr - 1 >= 0 && image[rr - 1][rc] == oldColor) {
            image = floodFill(image, rr - 1, rc, oldColor, newColor);
        }
        if (rc + 1 < image[0].size() && image[rr][rc + 1] == oldColor) {
            image = floodFill(image, rr, rc + 1, oldColor, newColor);
        }
        if (rc - 1 >= 0 && image[rr][rc - 1] == oldColor) {
            image = floodFill(image, rr, rc - 1, oldColor, newColor);
        }
        return image;
    }
};

int main()
{
    Solution s;

    vector<vector<int>> image = { {0, 0, 0}, {0, 1,1}};
    vector<vector<int>> result = s.floodFill(image, 1, 1, 1);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
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

