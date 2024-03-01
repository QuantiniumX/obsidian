A hash table is a data structure where data is stored in an **associative** manner. The data is mapped to array positions by a **hash function** that generates a **unique** value from each key.

The main advantage of using a hash function is we can access an element in O(1) time complexity.

**Hash Function** is just a mathematical formula that will convert an input to an integer that is related to the the index in the array where the value is stored.

### Properties 

1. Uniformity - A good hash function must map the keys as evenly as possible i.e. that there should be no collisions if possible.
2. Deterministic - A hash function must always generate the same hash value for a given input value.
3. Low Cost - The cost of executing a hash function must be small so that using the hashing technique becomes preferable over other traditional approaches.

