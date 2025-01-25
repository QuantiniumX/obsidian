A stack is a linear data structure which follow LIFO principle.

### Operation
- Push Operation - 
	- if stack is full. (top == capacity - 1) then stack overflow. give error
	- else increment top by 1 and insert new value at top

- Pop operation
	- if (top == -1) stack is empty. popping will give an underflow error.
	- else store the top value in variable. decrease the top and return the variable.
- Top or Peek Operation
	- return the top of the stack if stack is not empty.

### Application
- Function call - Stacks are used to keep track of the return addresses of function calls, allowing the program to return to the correct location after a function has finished executing.
- Recursion - Stack are used to store the local variables and return addresses of recursive function calls, allowing the program to keep track of the current state of recursion.
- Expression evaluation - Stacks are used to evaluate expressions in postfix notatoin.
- Syntax parsing - Stacks are used to check the validity of syntax in programming languages and other formal languages.
- Memory management - Stack are used to allocate and manage memory in some OS and programming languages.

## Infix to Postfix Conversion
- The compiler scans the expression from either left to right or from right to left.
- The compiler first scans the expression to evaluate the expression b * c, then again scans the expression to add a to it.
- For example - a + b * c + d. the postfix is abc*+d+

### Algorithm
- Scan all the symbols one by one from left to right in the given infix Expression.
- If the reading symbol is an operand, then immediately append it to postfix expression.
- If reading symbol is left parenthesis '('. then push it onto stack.
- if the reading symbol is right parenthesis ')', then pop all the content of stack until the respective left parenthesis is popped.
- If the reading symbol is an operator (+, -, $*$ , /) then push it onto the stack. However, first pop the operator which are already on the stack that have higher or equal precedence than the current operator and append them to the postfix. If an open parenthesis is there on top of the stack then push the operator into the stack.
- If the input is over, pop all the remaining symbols from the stack and append them to the postfix.

### Advantages
- Not require the usage of parenthesis.
- No operator precedence rules. so the order of operations is always clear.
- Easier to evaluate using a stack base solution.

## Evaluation of postfix expressions
- Create an empty stack.
- scan the string from left to right.
	- if the token is an operand, convert it from a string to an integer and push the value onto the operand stack.
	- if the token is an operator. it will need two operands. Pop the operandStack twice. The first pop is the second operand and the second pop is the first operand. Perform the arithmetic operation. Push the result back on the operand stack.
- When the input expression has been completely processed the result is on the stack. Pop the operand stack and return the value.
