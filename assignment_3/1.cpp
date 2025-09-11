#include <iostream>
using namespace std;

int myStack[100]; 
int top = -1;   


void push(int value) {
    if (top == 99) {
        cout << "Stack is full! (Overflow)\n";
    } else {
        top++;
        myStack[top] = value;
        cout << value << " pushed into myStack.\n";
    }
}


void pop() {
    if (top == -1) {
        cout << "Stack is empty! (Underflow)\n";
    } else {
        cout << "Popped element: " << myStack[top] << endl;
        top--;
    }
}


void peek() {
    if (top == -1) {
        cout << "Stack is empty. Nothing to peek.\n";
    } else {
        cout << "Top element is: " << myStack[top] << endl;
    }
}


void isEmpty() {
    if (top == -1) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Stack is not empty.\n";
    }
}


void isFull() {
    if (top == 99) {
        cout << "Stack is full.\n";
    } else {
        cout << "Stack is not full.\n";
    }
}


void display() {
    if (top == -1) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << myStack[i] << " ";
        }
        cout << endl;
    }
}


int main() {
    int choice, value;

    do {
        cout << "Stack Menu";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek (Top Element)\n";
        cout << "4. Is Empty?\n";
        cout << "5. Is Full?\n";
        cout << "6. Display Stack\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                isEmpty();
                break;

            case 5:
                isFull();
                break;

            case 6:
                display();
                break;

            case 7:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
