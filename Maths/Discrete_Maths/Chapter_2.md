---
id: Chapter_2
aliases: []
tags: []
---
### Logical form and equivalence
The central concept of deductive logic is the concept of argument form. An argument is a sequence of statements aimed at demonstrating the truth of an assertion. The assertion at the end of the sequence is called the conclusion, and the preceding statements are called premises.To have confidence in the conclusion that you draw from an argument, you must be sure that the premises are acceptable on their own merits or follow from other statements that are known to be true.

We can write two statements in different form even though in the end they mean the same things. eg - 6 is greater than 2, 2 is less than 6. 

p ∧ q === q ∧ p. They both are logically equivalent.

Two statement forms are called logically equivalentif, and only if, they have identical truth values for each possible substitution of statements for their statement variables. The logical equivalence of statement forms P and Q is denoted by writing P ≡ Q.

### Statements
A **statement** (or proposition) is a sentence that is true or false but not both.

### Compound Statements
Compound statements are just two or more statements joined together by logical expressions.
 
~p -> Negation of p - NOT operator 
p ∧ q -> Conjunction of p and q - AND operator
p ∨ q -> disjunction of p and q - OR Operator

In english we can use many words to signify these. 
- p but q mean p and q
- neither p nor q means ~p and ~q

#### Evaluating the Truth of More General Compound Statements
A statement form (or propositional form) is an expression made up of statement variables (such as p, q, and r) and logical connectives (such as ∼, ∧, and ∨) that becomes a statement when actual statements are substituted for the component statement variables. The truth table for a given statement form displays the truth values that correspond to all possible combinations of truth values for its component statement variables.

### De-Morgan's law
- ∼(p ∧ q) ≡ ∼p ∨ ∼q -> The negation of an and statement is logically equivalent to the or statement in which each component is negated.
- ∼(p ∨ q) ≡ ∼p ∧ ∼q -> The negation of an or statement is logically equivalent to the and statement in which each component is negated.

One lesson to be learned is that when you apply De Morgan’s laws, you must have complete statements on either side of each AND and on either side of each OR.

### Tautologies and contradictions
A tautology is a statement form that is always true regardless of the truth values of the individual statements substituted for its statement variables. A statement whose form is a tautology is a tautological statement.

A contradication is a statement form that is always false regardless of the truth values of the individual statements substituted for its statement variables. A statement whose form is a contradication is a contradictory statement.

### Conditional statements
Let p and q be statements. A sentence of the form “If p then q” is denoted symbolically by “p -> q”; p is called the hypothesis and q is called the conclusion.

The combination of circumstances in which you would call a conditional sentence false occurs when the hypothesis is true and the conclusion is false. We call p the hypothesis (or antecedent) of the conditional and q the conclusion (or consequent).

**p -> q === ~p ∨ q**

#### Negation of conditional statements
The negation of “if p then q” is logically equivalent to “p and not q.”. **~(p -> q) ≡ p ∧ ~q**

#### Contrapositive of conditional statements
A conditional statement is logically equivalent to its contrapositive. 

The contrapositive of a conditional statement of the form “If p then q” is If ~q then ~p. Symbolically, The contrapositive of p -> q is [~q -> ~p].

#### Converse of a conditional statements
Suppose a conditional statement of the form “If p then q” is given. The converse is “If q then p.” **The converse of p -> q is q -> p,**

#### Inverse of conditional statements
Suppose a conditional statement of the form “If p then q” is given. The inverse is “If ~p then ~q.” The inverse of p -> q is [~p → ~]q.

### Biconditional statements
Given statement variables p and q, the biconditional of p and q is “p if, and only if, q” and is denoted p ↔ q. It is true if both p and q have the same truth values and is false if p and q have opposite truth values. The words if and only if are sometimes abbreviated iff.

### Order of Operations
~ > (∧,∨) > (-> <->)




