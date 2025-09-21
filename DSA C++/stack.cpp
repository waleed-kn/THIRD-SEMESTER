#include<iostream>
using namespace std;

class Stack {
    int *arr;
    int size;
    int top;

public:
    // constructor
    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // push operation
    void push(int value) {
        if (top == size - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " into the stack" << endl;
        }
    }

    // pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << "Popped " << arr[top] << " from stack" << endl;
            top--;
        }
    }

    // top element
    int peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    // size of stack
    int getSize() {
        return top + 1;
    }

    // check if stack is empty
    bool isEmpty() {
        return (top == -1);
    }

    // destructor
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack st(5);  // stack of size 5

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.peek() << endl;
    cout << "Stack size: " << st.getSize() << endl;

    st.pop();
    cout << "Top after pop: " << st.peek() << endl;

    while(!st.isEmpty()) {
        st.pop();
    }

    return 0;
}
