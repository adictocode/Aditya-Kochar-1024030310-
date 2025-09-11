#include <iostream>
#include <cstring> 
using namespace std;



char mystack[100];
int top = -1;


void push(char ch) {
    if (top == 99) {
        cout << "Stack Overflow!\n";
    } else {
        mystack[++top] = ch;
    }
}

char pop() {
    if (top == -1) {
        cout << "Stack Underflow!\n";
        return '\0';
    } else {
        return mystack[top--];
    }
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);  

  
    for (int i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    
    for (int i = 0; i < strlen(str); i++) {
        str[i] = pop();
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
