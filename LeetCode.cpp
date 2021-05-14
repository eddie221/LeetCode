#include <iostream>
#include <vector>

using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }

    void push(int val) {
        if (container.size() == 0) {
            min = val;
        }
        else {
            if (val < min) {
                min = val;
            }
        }
        container.push_back(val);
    }

    void pop() {
        container.pop_back();
        min = container[0];
        for (int i = 1; i < container.size(); i++) {
            if (min > container[i]) {
                min = container[i];
           }
        }
    }

    int top() {
        return container.back();
    }

    int getMin() {
        return min;
    }
private:
    vector<int> container;
    int min;
};

int main()
{
    MinStack* minStack = new MinStack();
    minStack->push(-2);
    minStack->push(0);
    minStack->push(-3);
    int a = minStack->getMin(); // return -3
    minStack->pop();
    int b = minStack->top();    // return 0
    int c = minStack->getMin(); // return -2
    cout << a << " " << b << " " << c << endl;
    /*Solution s;
    vector<int> nums = { 1, 3, 0, 4, 12 ,0 };
    s.moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }*/

    /*for (int i = 0; i < r.size(); i++) {
        for (int j = 0; j < r[i].size(); j++) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }*/
    
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}