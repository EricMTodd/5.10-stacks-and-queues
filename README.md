# 5.10-stacks-and-queues

Your assignment this week is to work with stacks and queues. You will use the built in stack and queue template (ADT) combined with int and char data types. The assignment is to write the evaluate function for a post fix operator. Typically mathematical equations are written as infix with parenthesis for readability for example (A + B) -C means add A and B then subtract C. Postfix is a way of writing equations that does not need parenthesis. The way that post fix avoids parenthesis is by using the concept of a stack. A operator is preceded by the two arguments that it is to use. If one of those characters is an operator then that operator needs to be evaluated first. For example the equation above would be written in postfix as AB+C-. Your assignment is to write a function that takes a queue of characters (single digit integers stored as char, and operators) and evaluate the mathematical equation correctly.

The algorithm for evaluating a postfix expression is as follows.

-Start at the leftmost side

-If the character is an operand - push onto stack

-If the character is an operator - pull top two operands from stack - execute operation on the operands - push result onto operand stack

-When queue is empty - top value of stack is the result.

Couple things you need to notice: you will be given a list of char - you need to interpret these chars correctly as integers values or operands.

Also, make sure to note the order of popping things off the stack and what order the operands should be evaluated (it matters for subtraction and division).

You may make helper functions but you may not alter the function signatures given.