#include <iostream>

class Stack {
   private:
    int *arr;
    int capacity;
    int top;

   public:
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        top = 0;
    }

    ~Stack() { delete[] arr; }

    bool is_empty() { return top == 0; }

    bool is_full() { return top == capacity; }

    void push(int x) {
        if (is_full()) {
            std::cout << "Stack Overflow! Cannot push an element into stack"
                      << std::endl;
            return;
        }
        arr[top++] = x;
    }

    int pop() {
        if (is_empty()) {
            std::cout << "Stack Underflow! Cannot pop further as stack is empty"
                      << std::endl;
            return -1;
        }
        return arr[--top];
    }

    int peek() {
        if (is_empty()) {
            std::cout << "Stack is empty. No element to peek" << std::endl;
            return -1;
        }
        return arr[top - 1];
    }

    int size() { return top + 1; }
};

int main() {
    Stack stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6); // This will cause a stack overflow
    std::cout << "Popped element: " << stack.pop() << std::endl;
    std::cout << "Peeked element: " << stack.peek() << std::endl;
}
