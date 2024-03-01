
//============================================================================
// Name        :
// Author      : Bonnie Bell
// Version     :
// Copyright   : Your copyright notice
// Description : Stacks and Queues
//============================================================================

#include <fstream>
#include <iostream>
#include <time.h>
#include <stack>
#include <queue>

using namespace std;
int evalPostfix(std::queue<char> expression) {
    stack<int> operands;

    while (!expression.empty()) {
        char current = expression.front();
        expression.pop();

        if (isdigit(current)) {
            operands.push(current - '0'); // Convert char to int and push onto stack
        } else if (current == '+' || current == '-' || current == '*' || current == '/') {
            // Fetch the top two operands from the stack
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();

            // Perform the operation based on the current operator
            switch (current) {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                case '/':
                    operands.push(operand1 / operand2);
                    break;
            }
        }
    }

    // The final result is on top of the stack
    return operands.top();
}


int main() {
	std::queue<char> queue1, queue2;
	//basic simple addition
	queue1.push('1');
	queue1.push('2');
	queue1.push('+');
	cout<<"Queue1 evaluates to "<<evalPostfix(queue1)<<std::endl;
	queue2.push('5');
	queue2.push('6');
	queue2.push('7');
	queue2.push('+');
	queue2.push('1');
	queue2.push('2');
	queue2.push('+');
	queue2.push('-');
	queue2.push('*');
	queue2.push('4');
	queue2.push('/');
	cout<<"Queue2 evaluates to "<<evalPostfix(queue2)<<std::endl;
	return 0;
}

