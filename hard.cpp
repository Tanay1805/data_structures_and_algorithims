// Hard:

// Design a function, "calculateExpression," to evaluate a mathematical expression represented as a string. The function should support basic arithmetic operations such as addition, subtraction, multiplication, and division, as well as parentheses for defining precedence.



// Example:

// Input: "3 + 4 * (2 - 1)" 

// Output: 7


// Input: "( ( 8 * 4 ) - 6 ) + ( 5 / 2 )" 

// Output: 28.5
//  -->
#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

double performOperation(double operand1, double operand2, char op) {
    switch(op) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': return operand1 / operand2;
        default: return 0.0;
    }
}
double evaluatePostfix(string postfix) {
    stack<double> operands;
    int i=0;
    while (i<postfix.length()){
        if (isdigit(postfix[i])){
            double operand=0;
            while (i<postfix.length()&&isdigit(postfix[i])) {
                operand=operand*10+(postfix[i] - '0');
                i++;
            }
            operands.push(operand);
        } else if (isOperator(postfix[i])) {
            double operand2=operands.top();
            operands.pop();
            double operand1=operands.top();
            operands.pop();
            double result=performOperation(operand1, operand2, postfix[i]);
            operands.push(result);
            i++;
        } else {
        
            i++;
        }
    }
    return operands.top();
}
string infixToPostfix(string infix) {
    stack<char> operators;
    string postfix;
    for (char c : infix) {
        if (isspace(c))
            continue;
        if (isdigit(c)) {
            
            postfix += c;
        } else if (c == '(') {
            
            operators.push(c);
        } else if (c == ')') {
            
            while(!operators.empty() && operators.top() != '(') {
                postfix += ' ';
                postfix += operators.top();
                operators.pop();
            }
            operators.pop();
        } else if(isOperator(c)) {
            while(!operators.empty()&& precedence(operators.top())>= precedence(c)) {
                postfix += ' ';
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
            postfix += ' ';
        }
    }
    while (!operators.empty()) {
        postfix += ' ';
        postfix += operators.top();
        operators.pop();
    }
    return postfix;
}
double calculateExpression(string expression) {
    string postfix = infixToPostfix(expression);
    return evaluatePostfix(postfix);
}

int main(){
    string expression;
    cout <<"Enter the mathematical expression: ";
    getline(cin, expression);

    double result =calculateExpression(expression);
    cout << "Result:" << result << endl;

    return 0;
}
