#include <iostream>
#include <stack>

class QueueUsingStacks {
private:
    std::stack<int> stack1; // Stack for enqueue operation
    std::stack<int> stack2; // Stack for dequeue operation

public:
    void enqueue(int val) {
        stack1.push(val);
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty! Cannot dequeue." << std::endl;
            return;
        }

        if (stack2.empty()) {
            // Transfer elements from stack1 to stack2 in reverse order
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        stack2.pop(); // Remove the front element from stack2
    }

    int front() {
        if (isEmpty()) {
            std::cout << "Queue is empty! Cannot get front element." << std::endl;
            return -1;
        }

        if (stack2.empty()) {
            // Transfer elements from stack1 to stack2 in reverse order
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        return stack2.top(); // Return the front element from stack2
    }

    bool isEmpty() {
        return stack1.empty() && stack2.empty();
    }
};

int main() {
    QueueUsingStacks queue;

    queue.enqueue(5);
    queue.enqueue(2);
    queue.enqueue(8);

    std::cout << "Front element: " << queue.front() << std::endl; // Output: Front element: 5

    queue.dequeue();
    queue.enqueue(3);
    queue.dequeue();

    std::cout << "Front element: " << queue.front() << std::endl; // Output: Front element: 8

    queue.dequeue();
    queue.dequeue();
    queue.dequeue(); // Trying to dequeue from an empty queue

    return 0;
}
