**Big O notation** uses a function to describe how the algorithm’s worst-case performance relates to the problem size as the size grows very large. (This is sometimes called the program’s **asymptotic performance.**)
## Rules for Calculating an Algoritm's Big O Notation
1. If an algorithm performs a certain sequence of steps f(N) times for a mathematical function f, it takes O(f(N)) steps.
2. If an algorithm performs a operation that take O(f(N)) and then second operation takes O(g(N)). The algorithm's total performance is O(f(N) + g(N)).
3. If an algorithm takes O(f(N) + g(N)) and if f(N) >> g(N). The algorithm performance can be simplified to O(f(N)).
4. If an algorithm performs f(N) operation and for each of this operation it performs g(N) operation. The total performance is O(f(N) * g (N)).
5. Ignore const multiples. O(C * f(N)) -> O(f(N)). We can ignore constants.

FOR REFERENCE [[essential_algorithms.pdf#page=31]]
## Common Runtime Functions
- **O(1)** - Constant
- **O(log n)** - Logarithmic
- **O(n)** - Linear
- **O(n log n)** - Linearithmic
- **O(n^2)** - Quadratic
- **O(n^3)** - Cubic
- **O(2^n)** - Exponential
- **O(n!)** - Factorial
- **O(n^k)** - Polynomial

![[Pasted image 20240302012713.png]]
![[Pasted image 20240302012817.png]]

FOR REFERENCE - [[essential_algorithms.pdf#page=35]]
