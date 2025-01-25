> A **stack** is a linear data structure that follows the **Last In, First Out (LIFO)** principle, where the last element added to the structure is the first one to be removed. It operates on the principle of two main operations: push, which adds an element to the top of the stack, and pop, which removes the top element from the stack.

The basic concept can be illustrated by thinking of your data set as a **stack of plates or books** where you can only take the top item of the stack in order to remove things from it.

![[stack.png]]

## Stack Overflow
A stack data structures is used in programming languages to keep track of which function will run next, and which variable exist in the scope.

A call frame is just an area in memory that is set aside by the languages to keep track of a function call in progress. Call frames are allocated when a function is called and is freed when the function dies when they return.

In Other words:
1. Calling function pushes a call frame onto the runtime stack.
2. Returning from a function pops the top frame off the stack.

A **Stack Overflow** occurs if the number of calls in the stack exceeds the limit. The limit depends upon many factors, include programming language, machine architecture, multi-threading and the amount of available memory. 
![What ACTUALLY happens during a Stack Overflow?](https://youtu.be/_6zAAhkU_Iw?feature=shared)
