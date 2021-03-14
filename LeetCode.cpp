#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:

    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int dir = 0, x = 0, y = 0, result = 0;
        int dx[] = { 0, 1, 0, -1 };
        int dy[] = { 1, 0, -1, 0 };

        set<pair<int, int>> obstacleSet;
        for (int i = 0; i < obstacles.size(); i++) {
            obstacleSet.insert(make_pair(obstacles[i][0], obstacles[i][1]));
        }


        for (int i = 0; i < commands.size(); i++) {
            if (commands[i] == -1) {
                dir = (dir + 1) % 4;
            }
            else if (commands[i] == -2) {
                dir = (dir + 3) % 4;
            }
            else {
                for (int j = 0; j < commands[i]; j++) {
                    int tmp_x = x + dx[dir];
                    int tmp_y = y + dy[dir];
                    if (obstacleSet.find(make_pair(tmp_x, tmp_y)) == obstacleSet.end()) {
                        x = tmp_x;
                        y = tmp_y;
                        result = max(result, x * x + y * y);
                    }
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution s;
    vector<int> commands = { 4,-1,4,-2,4 };
    vector<vector<int>> obstacles = { {2, 4 } };
    cout << s.robotSim(commands, obstacles);
}

