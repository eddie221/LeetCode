#include <iostream>
#include <unordered_map>
#include <queue>

using namespace std;

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        container.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        queue<int> _c;
        while (container.size() > 1) {
            _c.push(container.front());
            container.pop();
        }
        int r = container.back();
        container.swap(_c);
        return r;
    }

    /** Get the top element. */
    int top() {
        return container.back();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return container.empty();
    }
private:
    queue<int> container;
};


int main()
{
    MyStack* myStack = new MyStack();
    myStack->push(1);
    myStack->push(2);
    myStack->top(); // return 2
    myStack->pop(); // return 2
    myStack->empty(); // return False
}

