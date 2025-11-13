#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
    Node* prev;
    Node(char x) : data(x), next(NULL), prev(NULL) {}
};

Node* head = NULL;

void insertLast(char x) {
    Node* n = new Node(x);
    if (!head) {
        head = n;
        return;
    }
    Node* t = head;
    while (t->next) t = t->next;
    t->next = n;
    n->prev = t;
}

bool isPalindrome() {
    if (!head || !head->next) return true;

    Node* left = head;
    Node* right = head;
    while (right->next) right = right->next;

    while (left != right && left->prev != right) {
        if (left->data != right->data) return false;
        left = left->next;
        right = right->prev;
    }
    return true;
}

int main() {
    insertLast('r');
    insertLast('a');
    insertLast('d');
    insertLast('a');
    insertLast('r');

    if (isPalindrome()) cout << "Palindrome";
    else cout << "Not Palindrome";
}
