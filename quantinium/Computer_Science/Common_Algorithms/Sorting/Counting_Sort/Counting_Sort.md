---
id: Counting_Sort
aliases: []
tags: []
---

**Counting Sort** is sorting algorithm that operates by counting the number of occuurences of the object that posses distinct key value, and applying the prefix sum on those counts to determine the position of each key value in the output sequence.

It is only suitable for direct use in situations where the variation in keys is not significantly greater than the number of items.

![Explanation](https://youtu.be/1mh2vilbZMg?feature=shared)

### Pseudo code
```
function CountingSort(input, k)
    
    count ← array of k + 1 zeros
    output ← array of same length as input
    
    for i = 0 to length(input) - 1 do
        j = key(input[i])
        count[j] = count[j] + 1

    for i = 1 to k do
        count[i] = count[i] + count[i - 1]

    for i = length(input) - 1 down to 0 do
        j = key(input[i])
        count[j] = count[j] - 1
        output[count[j]] = input[i]

    return output
```

### Analysis

#### Time Complexity
- **Best Case** - O(n + u) -  Ω(n)
- **Average Case** - O(n + u)
- **Worst Case** - O(n + u) 

#### Space Complexity
- O(n + u) - Due to the output and the count sort taking the extra space.
