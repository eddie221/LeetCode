#include <iostream>

using namespace std;

//class Solution {
//public:
//    int minPartitions(string n) {
//        char max = '0';
//        for (int i = 0; i < n.length(); i++) {
//            if (n[i] > max) {
//                max = n[i];
//            }
//        }
//        return max - 48;
//    }
//};

class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small):big(big), medium(medium), small(small) {
        
    }

    bool addCar(int carType) {
        switch (carType) {
        case 1:
            if (big > 0) {
                big--;
                return true;
            }
            else {
                return false;
            }
            break;
        case 2:
            if (medium > 0) {
                medium--;
                return true;
            }
            else {
                return false;
            }
            break;
        case 3:
            if (small > 0) {
                small--;
                return true;
            }
            else {
                return false;
            }
            break;
        }
        return false;
    }
private:
    int big = 0, medium = 0, small = 0;
};

int main()
{
    ParkingSystem* parkingSystem = new ParkingSystem(1, 1, 0);
    parkingSystem->addCar(1); // return true because there is 1 available slot for a big car
    parkingSystem->addCar(2); // return true because there is 1 available slot for a medium car
    parkingSystem->addCar(3); // return false because there is no available slot for a small car
    parkingSystem->addCar(1); // return false because there is no available slot for a big car. It is already occupied.
    /*Solution s;
    vector<string> 
    cout << s.minPartitions("27346209830709182346");*/
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
    /*vector<double> result;
    result = s.averageOfLevels(five);
    for (double r : result) {
        cout << r << endl;
    }*/
}

