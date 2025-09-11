#include <iostream>
#include <stack>
using namespace std;

int main() {
    string postfix;
    stack<int> s;

    cout << "Enter a postfix expression : ";
    cin >> postfix;

    for (int i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        if (isdigit(ch)) {
            s.push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            int num2 = s.top(); s.pop();
            int num1 = s.top(); s.pop();
            int result;

            if (ch == '+')
                result = num1 + num2;
            else if (ch == '-')
                result = num1 - num2;
            else if (ch == '*')
                result = num1 * num2;
            else if (ch == '/')
                result = num1 / num2;

            s.push(result);
        }
    }

    cout << "Result: " << s.top() << endl;

    return 0;
}

