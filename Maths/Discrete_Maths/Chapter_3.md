---
id: Chapter_3
aliases: []
tags: []
---

### Predicates and Quantified statements - 1
A **predicate** is a sentence that contains a finite number of variables and becomes a statement when specific values are substituted for the variables. The domain of a predicate variable is the set of all values that may be substituted in place of the variable.

One sure way to change predicates into statements is to assign specific values to all their variables. Another way to obtain statements from predicates is to add quantifiers. Quantifiers are words that refer to quantities such as “some” or “all” and tell for how many elements a given predicate is true. The symbol ∀ denotes “for all” and is called the universal quantifier.

#### The Universal Quantifier: ∀
Let Q(x) be a predicate and D the domain of x. A universal statement is a statement of the form “∀x ∈ D, Q(x).” It is defined to be true if, and only if, Q(x) is true for every x in D. It is defined to be false if, and only if, Q(x) is false for at least one x in D. A value for x for which Q(x) is false is called a counterexample to the universal statement.

#### The Existential Quantifier: ∃
Let Q(x) be a predicate and D the domain of x. An existential statement is a statement of the form “∃x ∈ D such that Q(x).” It is defined to be true if, and only if, Q(x) is true for at least one x in D. It is false if, and only if, Q(x) is false for all x in D.

### => and <=> 
Let P(x) and Q(x) be predicates and suppose the common domain of x is D.
- The notation P(x) => Q (x) means that every element in the truth set of P(x) is in the truth set of Q(x), or, equivalently, ∀x, P(x) -> Q(x).
- The notation P(x) <=> Q (x) means that P(x) and Q(x) have identical truth sets, or, equivalently, ∀x, P(x) <-> Q(x).

