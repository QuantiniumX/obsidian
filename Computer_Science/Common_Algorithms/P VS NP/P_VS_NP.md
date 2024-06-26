Broadly speaking, algorithms can be classified into two categories:
- "Polynomial time"
- "Exponential time"

![](https://storage.googleapis.com/qvault-webapp-dynamic-assets/course_assets/TOEsAwr.png)

Think it as if it's  somewhat normal increase in number of operation per the elements pass then its Polynomial. If it increases really fast then, it is exponential like exponential increase.

## Polynomial Time = P
Back in the 1970s, some computer scientist researchers wanted to come up with a good, descriptive name for the set of polynomial time algorithms. After much deliberation, they settled on the letter P (naming things is hard).

In general, the main important takeaway is that:
- Problems that fall into class P are practical to solve on computers.
- Problems that don't fall into P are hard, slow, and impractical.

## Non-Deterministic Polynomial Time = NP
NP (which stands for nondeterministic polynomial time) is the set of problems whose solutions can be verified in polynomial time, but not necessarily solved in polynomial time.

[Wiki](https://en.wikipedia.org/wiki/NP_(complexity))

![P is in NP](https://storage.googleapis.com/qvault-webapp-dynamic-assets/course_assets/vO4GfRb.png)

## Non-Deterministic Polynomial Time Complete = NP-Complete
A decision problem C is NP-complete if:
- C is in NP, and
- Every problem in NP is reducible to C in polynomial time.

### How is a problem "reduced"?
Any ==problem A== can be reduced to a different ==problem(B)==, If there is an algorithms(called a ==reducer==) that changes an algorithms that solves Problem B into an algorithm that can solve ==Problem A==

We say that "Problem A is reducible to problem B" if the reducer from the above can be run in polynomial time.

If we have an algorithm that solves an ==NP-complete== problem, it has been proven that we can quickly reduce that algorithm into a new algorithm to solve any other problem in ==NP==.

## Does P equal to NP?
The P versus NP problem is a major unsolved problem in computer science. It asks whether every problem whose solution can be quickly verified (which means it is in NP) can also be solved quickly (which would mean it is also in P).

The question is "Are all NP problems really just P problems?"

The answer is, "we don't know, but probably not".

## Non-Deterministic Polynomial Time Hard= NP-Hard
All NP-complete problems are NP-hard, but not all NP-hard problems are NP-complete. The determining factor between NP-complete and NP-hard is that not all NP-hard problems are in NP.

```
A problem is NP-hard if every problem in NP can be reduced into it in polynomial time.
```
![](https://storage.googleapis.com/qvault-webapp-dynamic-assets/course_assets/p8wXLqA.png)

