#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> count;
        vector<int> number;
        for (int i = 0; i < deck.size(); i++) {
            count[deck[i]]++;
            if (count[deck[i]] == 1) {
                number.push_back(deck[i]);
            }
        }
        bool stop = false;
        for (int i = 2; !stop; i++) {
            bool available = true;
            for (int j = 0; j < number.size(); j++) {
                if (count[number[j]] < i) {
                    stop = true;
                }
                if (count[number[j]] % i != 0) {
                    available = false;
                    break;
                }
            }
            if (available) {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> deck = { 1,2,3,4,4,3,2,1 };
    cout << s.hasGroupsSizeX(deck);
}

