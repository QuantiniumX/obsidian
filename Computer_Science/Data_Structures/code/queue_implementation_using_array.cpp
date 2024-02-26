#include <iostream>

class Queue {
   private:
    int *arr;
    int capacity;
    int queue_front;
    int queue_rear;
    int queue_size;

   public:
    Queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        queue_front = 0;
        queue_rear = -1;
        queue_size = 0;
    }

    ~Queue() { delete[] arr; }

    bool is_empty() { return queue_size == 0; }

    bool is_full() { return queue_size == capacity; }

    int size() { return queue_size + 1; }

    void enqueue(int x) {
        if (is_full()) {
            std::cout << "Queue Overflow! Cannot enqueue element" << std::endl;
            return;
        }
        queue_rear = (queue_rear + 1) % capacity;
        arr[queue_rear] = x;
        queue_size++;
    }

    int dequeue() {
        if (is_empty()) {
            std::cout << "Queue underflow! Cannot dequeue element."
                      << std::endl;
            return -1;
        }
        int val = arr[queue_front];
        queue_front = (queue_front + 1) % capacity;
        queue_size--;
        return val;
    }

    int peek() {
        if (is_empty()) {
            std::cout << "Queue is empty. No element to peek." << std::endl;
            return -1;
        }
        return arr[queue_front];
    }
};

int main() {
    Queue queue(5);
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6); // This will cause a queue overflow
    std::cout << "Dequeued element: " << queue.dequeue() << std::endl;
    std::cout << "Peeked element: " << queue.peek() << std::endl;
}
