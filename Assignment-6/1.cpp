#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

Node* head = NULL;

void insertFirst(int x) {
    Node* n = new Node(x);
    if (!head) {
        head = n;
        n->next = n;
        return;
    }
    Node* t = head;
    while (t->next != head) t = t->next;
    n->next = head;
    t->next = n;
    head = n;
}

void insertLast(int x) {
    Node* n = new Node(x);
    if (!head) {
        head = n;
        n->next = n;
        return;
    }
    Node* t = head;
    while (t->next != head) t = t->next;
    t->next = n;
    n->next = head;
}

void deleteNode(int key) {
    if (!head) return;

    Node *t = head, *prev = NULL;

    do {
        if (t->data == key) {
            if (!prev) {
                Node* last = head;
                while (last->next != head) last = last->next;
                if (last == head) {
                    delete head;
                    head = NULL;
                    return;
                }
                last->next = head->next;
                Node* del = head;
                head = head->next;
                delete del;
                return;
            }
            prev->next = t->next;
            delete t;
            return;
        }
        prev = t;
        t = t->next;
    } while (t != head);
}

bool searchNode(int key) {
    if (!head) return false;
    Node* t = head;
    do {
        if (t->data == key) return true;
        t = t->next;
    } while (t != head);
    return false;
}

void display() {
    if (!head) return;
    Node* t = head;
    do {
        cout << t->data << " ";
        t = t->next;
    } while (t != head);
    cout << endl;
}

int main() {
    int ch, x;

    while (true) {
        cout << "\nCircular Linked List Menu\n";
        cout << "1 Insert First\n2 Insert Last\n3 Delete Node\n4 Search\n5 Display\n6 Exit\n";
        cin >> ch;

        if (ch == 6) break;

        if (ch == 1) {
            cin >> x;
            insertFirst(x);
        }
        else if (ch == 2) {
            cin >> x;
            insertLast(x);
        }
        else if (ch == 3) {
            cin >> x;
            deleteNode(x);
        }
        else if (ch == 4) {
            cin >> x;
            cout << (searchNode(x) ? "Found\n" : "Not Found\n");
        }
        else if (ch == 5) {
            display();
        }
    }
}
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node* prev;
//     Node(int x) : data(x), next(NULL), prev(NULL) {}
// };

// Node* head = NULL;

// void insertFirst(int x) {
//     Node* n = new Node(x);
//     if (!head) {
//         head = n;
//         return;
//     }
//     n->next = head;
//     head->prev = n;
//     head = n;
// }

// void insertLast(int x) {
//     Node* n = new Node(x);
//     if (!head) {
//         head = n;
//         return;
//     }
//     Node* t = head;
//     while (t->next) t = t->next;
//     t->next = n;
//     n->prev = t;
// }

// void deleteNode(int key) {
//     Node* t = head;
//     while (t) {
//         if (t->data == key) {
//             if (!t->prev && !t->next) {
//                 head = NULL;
//                 delete t;
//                 return;
//             }
//             if (!t->prev) {
//                 head = t->next;
//                 head->prev = NULL;
//                 delete t;
//                 return;
//             }
//             if (!t->next) {
//                 t->prev->next = NULL;
//                 delete t;
//                 return;
//             }
//             t->prev->next = t->next;
//             t->next->prev = t->prev;
//             delete t;
//             return;
//         }
//         t = t->next;
//     }
// }

// bool searchNode(int key) {
//     Node* t = head;
//     while (t) {
//         if (t->data == key) return true;
//         t = t->next;
//     }
//     return false;
// }

// void display() {
//     Node* t = head;
//     while (t) {
//         cout << t->data << " ";
//         t = t->next;
//     }
//     cout << endl;
// }

// int main() {
//     int ch, x;

//     while (true) {
//         cout << "\nDoubly Linked List Menu\n";
//         cout << "1 Insert First\n2 Insert Last\n3 Delete Node\n4 Search\n5 Display\n6 Exit\n";
//         cin >> ch;

//         if (ch == 6) break;

//         if (ch == 1) {
//             cin >> x;
//             insertFirst(x);
//         }
//         else if (ch == 2) {
//             cin >> x;
//             insertLast(x);
//         }
//         else if (ch == 3) {
//             cin >> x;
//             deleteNode(x);
//         }
//         else if (ch == 4) {
//             cin >> x;
//             cout << (searchNode(x) ? "Found\n" : "Not Found\n");
//         }
//         else if (ch == 5) {
//             display();
//         }
//     }
// }
