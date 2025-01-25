A hash table is a data structure where data is stored in an **associative** manner. The data is mapped to array positions by a **hash function** that generates a **unique** value from each key.

The main advantage of using a hash function is we can access an element in O(1) time complexity.

**Hash Function** is just a mathematical formula that will convert an input to an integer that is related to the the index in the array where the value is stored.


### Collision Resolution techniques
1. Open addressing - collisions are handled by looking for the following empty space in the table. If the first slot is already taken, the hash function is applied to the subsequent slots until one is left empty.
2. Seperate chaining - In separate chaining, a linked list of objects that hash to each slot in the hash table is present. Two keys are included in the linked list if they hash to the same slot.
3. Robin hood hashing - The algorithm compares the distance between the slot and the occupied slot of the two keys if a new key hashes to an already-occupied slot. The existing key gets swapped out with the new one if it is closer to its ideal slot. This brings the existing key closer to its ideal slot.

![[implementing_hash_table.c]]