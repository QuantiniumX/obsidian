Randomization is really useful as it helps us test algorithms using random inputs and test their performance and know more about it properties.
The first step in any randomized algorithm is generating random numbers.

Even though we talk about random(like math.random in JS) is not truly a random number generator as if you know the details of the algorithm and the internal state of machine we can calculate the random no.

For getting randomized variables, we must calculate from something that may seem really random such as Brownian motion, dice rolling, static radio waves, position of cursor on screen, etc. In practice these true-random-number-generator(TRNG) are slow and complicated to implement.

Since most of the time we can be satisfied by the result if it is "Random Enough". Therefore we generally use a Pseudo-random-number-generator which are faster than TRNG.  


## Generating Values
One simple and common method of creating pseudo-random numbers is a linear congruential generator, which uses the following relationship to generate numbers:

X$_n$$_+$$_1$ = (A x X$_n$ + B) Mod M; A, B, M are consts
FOR REFERENCE - [[essential_algorithms.pdf#page=50]]
We can calculate stuff random no with this formula but if we come to know the constants we can easily calculate the no it'll generate.

