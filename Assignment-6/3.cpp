#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int x) : data(x), next(NULL), prev(NULL) {}
};

Node* head = NULL;

int sizeDLL() {
    int count = 0;
    Node* t = head;
    while (t) {
        count++;
        t = t->next;
    }
    return count;
}

int main() {
    head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    cout << "Size of DLL: " << sizeDLL() << endl;
}
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node(int x) : data(x), next(NULL) {}
// };

// Node* head = NULL;

// int sizeCLL() {
//     if (!head) return 0;

//     int count = 0;
//     Node* t = head;
//     do {
//         count++;
//         t = t->next;
//     } while (t != head);
//     return count;
// }

// int main() {
//     head = new Node(5);
//     head->next = new Node(15);
//     head->next->next = new Node(25);
//     head->next->next->next = head;

//     cout << "Size of CLL: " << sizeCLL() << endl;
// }
