Functional Programming is all about immutablity. Immutable means once the value is created, it cannot be changed.

## Why Immutablity
Immutable data is easier to think and about and work with. When 10 different functions have accesss to the same variable, and you're debugging a problem with that variable, you have to consider the possibility that any of those functions could have changed the value.

When a varible is Immutable, you can be sure it hasn't changed since it's reckoning. It's helluva easier to work with.

## Declarative Programming
FP aims to be declarative. We prefer to declare what we want the computer to do, rather than much around with the details of how to do it.

## It's MATH
FP tends to be popular amongst developers with a strong mathematical background. After all, a math equation isn't procedural: it's declarative. 
```
avg = Σx/N
```
It just says summation of all variables divided by the total number of variable will output average.
This equation is the declarative way of writing "calculate the average of a list of numbers".

```python
# Imperative Way
def get_average(nums):
    total = 0
    for num in nums:
        total += num
    return total / len(nums)
```

```python
# Functional way
def get_average(nums):
    return sum(nums) / len(nums)
```

We are not keeping track of the state.(with Imperative way it is designed to remember its previous states) but in functional we don't care about states and are just composing functions together to get the result we want.)

