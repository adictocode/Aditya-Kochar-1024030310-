//implementation of LL done in 1.cpp
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
void displayWithHeadRepeat() {
    if (!head) return;

    Node* t = head;
    do {
        cout << t->data << " ";
        t = t->next;
    } while (t != head);

    cout << head->data;   // repeat head node value
    cout << endl;
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