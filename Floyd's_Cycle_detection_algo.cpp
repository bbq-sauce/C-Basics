#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

bool hasCycle(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return false; // An empty list or a list with only one node cannot have a cycle.
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;         // Move slow pointer one step forward.
        fast = fast->next->next;   // Move fast pointer two steps forward.

        if (slow == fast) {
            return true; // The two pointers meet, indicating a cycle exists.
        }
    }

    return false; // If the loop finishes without finding a cycle, return false.
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 2 (cycle to node 2)
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
   // head->next->next->next->next->next = head->next; // Cycle to node 2

    if (hasCycle(head)) {
        std::cout << "The linked list has a cycle." << std::endl;
    } else {
        std::cout << "The linked list does not have a cycle." << std::endl;
    }

    // Don't forget to free memory by deallocating the nodes (not shown in this example)

    return 0;
}
