The efficiency of an algorithm depends on the time, storage and other resources it requires to execute the algorithm. The efficiency is measured with the help of asymptotic notations.

An algorithm may have difference performance depending upon the type of input. the study of change in performance of the algorithm with the change in the order of input size is defined as asymptotic analysis.

### Types of asymptotic notation
- Big O - O
- Big Omega - $\\Omega$
- Big Theta - $\Theta$

#### Big O Notation - upper bound
O(g(n)) = {f(n): there exists positive constant c and $n_{0}$ such that $0 \leq f(n) < c(g(n)) \:for  \: all \: n \geq n_{0}$}.

#### Big Omega - $\Omega$ - Lower bound
$\Omega(g(n))$ = f(n): there exists positive constants c and $n_{0}$ such that $0\leq c(g(n) \leq f(n)) \: for \: all \: n\geq n_{0}$.

#### Big Theta - $\Theta$a- Tight bound
$\Theta(g(n))$ = {f(n) : there exists positive constants $c_{1}, c_{2}$ and $n_{0}$ such that $0\leq c_{1}(gn) \leq f(n) \leq c_{2}(g(n))$ for all $n \geq n_{0}$}.

