#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

bool isCircular(Node* head) {
    if (!head) return false;
    Node* t = head->next;
    while (t && t != head) t = t->next;
    return t == head;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << (isCircular(head) ? "Circular" : "Not Circular") << endl;

    head->next->next->next = head;

    cout << (isCircular(head) ? "Circular" : "Not Circular") << endl;
}
