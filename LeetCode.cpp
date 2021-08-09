#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;
    int front;
    /** Initialize your data structure here. */
    MyQueue() {
    }

    /** Push element x to the back of queue. */
    void push(int x) {
        if (s1.empty()) {
            front = x;
        }
        s1.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        int x = s2.top();
        s2.pop();
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }

    /** Get the front element. */
    int peek() {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        int x = s2.top();
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    MyQueue* obj = new MyQueue();
    int x = 1;
    obj->push(x);
    int param_2 = obj->pop();
    int param_3 = obj->peek();
    bool param_4 = obj->empty();
    return 0;
}
