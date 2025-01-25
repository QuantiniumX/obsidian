---
id: Chapter_1
aliases: []
tags: []
---

### Some basic definitions
A **Variable** is just a placeholder to put stuff.

A **Universal Statement** says that a certain property is true for all elements in the set. eg - All negative numbers are smaller than zero.

A **Conditional Statement** says that if one thing is true then some other thing also has to be true. 

A **Existential Statement** says that if given a property that may be true, there is at least one thing for which the property is true.

### Sets 
A **Set** is simply a collection of elements. If S is a set then x ∈ S means that x is an element of S. A set may be specified using **curly braces**. {1, 2, 3, 4, 5}. If we have a long set like integers from 1 to 100, it can be written as {1, 2, 3, ... , 100} where **...** is called **ellipsis**.

We can also denote a set using set-builder notation. Let S be a set and P(x) be a property that elements of S may or may not satisfy. We may define set as {x ∈ S | P(x)}. It is spoken as **Set of all elements of S such that the property P(x) is true.**
{1, 2, 3, 4, 5} , {1, 2, 1, 2, 3, 4, 5, 5} are equal.

A subset is a set that contains all elements of another set. A = {1, 2}, B = {1, 2, 3, 4}. Here A is a subset of B or A ⊆ B

### Relations
If A and B are two sets, A **Relation R from A to B** is a subset of A x B. Given an ordered pair (x, y) in A x B, **x is related to y by R**, written as **x R y**, if and only if, (x, y) in is R. The set A is called domain of R and set B is called co-domain.

A = {0, 1, 2} and B = {1, 2, 3}

A × B = {(0, 1), (0, 2), (0, 3), (1, 1), (1, 2), (1, 3), (2, 1), (2, 2), (2, 3)}

So for A x B = {(x, y)| x ∈ A and y ∈ B}, the set is {(0, 1), (0, 2), (0, 3), (1, 2), (1, 3), (2, 3)}.

### Functions
A **Function F** from set A to set B is a relation with domain A and co-domain B that satisfies the following properties :-
- For every element x in A, there is an element y in B such that (x, y) ∈ F. Every element in A should be related to element in B. One x can't have relation with two or more y.
- For all elements x in A and y and z in B, if (x, y) ∈ F and (x,z) ∈ F, then y = z.

If A and B are sets and F is a function from A to B, then given any element x in A, the unique element in B that is related to x by F is denoted F(x), which is read “F of x.”

A good way to think of functions is that suppose f is a function from X to Y and an input x of X is given. Imagine f to be a machine that processes x in a certain way to produce the output f (x).
