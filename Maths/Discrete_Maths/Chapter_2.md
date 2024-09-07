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

If you can show that the supposition that statement p is false leads logically to a contradiction, then you can conclude that p is true. 
∼p → c, where c is a contradiction 
∴ p

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
Suppose a conditional statement of the form “If p then q” is given. The converse is “If q then p.” **The converse of p -> q is q -> p**

#### Inverse of conditional statements
Suppose a conditional statement of the form “If p then q” is given. The inverse is “If ~p then ~q.” The inverse of p -> q is [~p → ~]q.

### Biconditional statements
Given statement variables p and q, the biconditional of p and q is “p if, and only if, q” and is denoted p ↔ q. It is true if both p and q have the same truth values and is false if p and q have opposite truth values. The words if and only if are sometimes abbreviated iff.

### Order of Operations
~ > (∧,∨) > (-> <->)

### Valid and Invalid arguments
An argument is a sequence of arguments. All statements in an argument except for the final one are called **premises / assumptions / hypothesis**. The final one is called **conclusion**.

When an argument is valid and its premises are true, the truth of conclusion is said to be inferred or deduced from the truth of the premises. If the conclusion is false then the argument is not valid.

An argument consisting of two premises and conclusion is called **syllogism**. The first and second premises are called the **major premise** and **minor premise**. The most famous form of syllogism in logic is called **modus pomens**. [If p then q, p ∴ q]. **modus ponens** is Latin meaning "method of affirming" - the conclusion is an affirmation. 
Example - If (p) the sum of digits of 371,487 is divisible by 3 then (q) 371,487 is divisible by 3. 

There is another valid argument form called **modus tollens**. [if p then q. ~q ∴ ~p]. It's meaning in latin is "method of denying" - the conclusion is a denial.
Example - If Zeus is human then Zeus is mortal. Zeus is not mortal ∴ Zeus is not human. We can prove its validity by using contradictions. If Zeus is not human then hes is not mortal (humans are mortal). But Zeus can't be mortal (god stuff) so he isn't human.

> An argument is called sound if, and only if, it is valid and all its premises are true. An argument that is not sound is called unsound.

Generalization, Specialization, Elimination, transitivity and proof by division into cases are widely used tools to tailor facts to fit into hypothesis of unknown theorems inorder to draw further conclusions.
#### Generalization
**Generalization** refers to the process of taking a specific concept or pattern and extending it to a broader or more abstract form.

The following arguments are valid - p ∴ p ∨ q, q ∴ p ∨ q. According to first, if p is true, then generally "p or q" is true for any other statement q.

#### Specialization
**Specialization** refers to the process of applying a general principle to specific cases. When classifying objects according to some property, we generally know more info about that object. When this happens we only take into case the property we are interested in.

The following arguments are valid - p ∧ q ∴ p, p ∧ q ∴ q

#### Elimination
This says if we have two possibilities(either one or other must be true), we can rule one out, then the remaining one should be true. 

Example:-
Premise 1: Either it is raining outside or it is sunny.
Premise 2: It is not raining outside.
Conclusion : It is sunny

This is also called **Disjunctive Syllogism**. The following arguments  - {p ∨ q, ∼q ∴ p}, {p ∨ q, ~p ∴ q}

#### Transitivity
Transitivity means that if a relation holds between one element and second one, and also holds between second and third element, then it also holds for first and third elements.

Arguments - {p → q, q → r ∴ p → r}

#### Proof by division into cases
In this we essentially divide the problem into several distinct cases, prove the statement for each case, and then conclude that the statement is true in general.

Arguments: p ∨ q, p → r, q → r ∴ r

Example - x is positive or x is negative., If x is positive, then x^2 > 0., If x is negative, then x^2 > 0 then  x^2 > 0.

### Fallacies
A Fallacy is an error in reasoning that results in an invalid argument. Some common fallacies are:
- Using ambiguous premises and treating them as unambiguous.
- Circular reasoning - Assuming what is to be proved without having proper premises.
- Jumping to a conclusion without adequate grounds.

#### Converse Error
The converse error, also known as the fallacy of affirming the consequent, is a logical fallacy that occurs when someone mistakenly assumes that the converse of a true conditional statement is also true.

Arguments: 
    p → q
    q
  ∴ p

This is logical mistake as even though q is true, it doesn't mean that p is true. There may be other reasons why q is true that that have nothing to do with p.

#### Inverse Error
The inverse error, also known as the fallacy of denying the antecedent, is a logical fallacy that occurs when someone incorrectly assumes that if the antecedent of a conditional statement is false, then the consequent must also be false.o

Arguments:  p → q
            ∼p
          ∴ ∼q

This is a fallacy because the truth of QQ does not necessarily depend on PP. Even if PP is false, QQ could still be true for other reasons.

### contradictions
