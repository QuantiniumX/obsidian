#include <iostream>
#include <vector>

template <typename T>

class Stack {
  private:
    std::vector<T> stack_arr;

  public:
    void push(const T &value) { stack_arr.push_back(value); }

    void pop() {
        if (!stack_arr.empty()) {
            stack_arr.pop_back();
        } else {
            throw std::out_of_range("Cannot pop element as stack is empty");
        }
    }
    T top() { return stack_arr.back(); }

    bool empty() { return stack_arr.empty(); }

    std::size_t size() { return stack_arr.size(); }
};

int main() {
    Stack<int> st;
    for (int i = 0; i < 10; i++) {
        st.push(i);
    }
    std::cout << st.top() << std::endl;
    std::cout << st.empty() << std::endl;
    std::cout << st.size() << std::endl;

    for(int i = 0; i < 10; i++) {
        std::cout << st.top() << std::endl;
        st.pop();
    }
    st.pop();
    return 0;
}

