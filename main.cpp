
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
//
// insert function here
//
return 0;
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

