**Abstraction** is the process of generalizing concrete details.

## Abstraction VS Encapsulation
- Abstraction is about creating a simple interface for complex behavior. It focuses on what's exposed. It's about making usage easy.
- Encapsulation is about hiding internal state. It focuses on tucking implementation details away so no one depends on them. It's about hiding implementation details.

## Are We Encapsulation or Abstracting
Both. We almost always do both.

```python
import random
attack_damage = random.randrange(5)
```

[Generating Random Numbers](https://www.random.org/randomness/) is a really hard problem. Creating a true random number generator is impossible so we generally make use or [Pseudorandom number generator](https://en.wikipedia.org/wiki/Pseudorandom_number_generator) that incorporate creating a seed using things such as time or position of cursor, etc and generate a random number with it. However the developers of the random library have abstracted that complexity away and encapsulated it within the simple randrange() function. Now we just need to call the function with the specified range and it will spit out a pseudo random number.

Getting abstraction is crucial because changing them later can be disastrous. For example changing the input parameters to the randrange function. It will break code all over the world and it can be disastrous.

