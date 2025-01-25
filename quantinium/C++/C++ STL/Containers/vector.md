defined in `<vector>`

[Vectors](https://en.cppreference.com/w/cpp/container/vector) are just dynamic [arrays](obsidian://open?vault=obsidian&file=Programming%2FC%2B%2B%20STL%2FContainers%2Farray). Vectors use contiguous storage locations for their elements, which means that their elements can be accessed using offsets on regular pointer to its elements, and just as efficiently as in arrays. 

#### Complexity of common operation
- random access - O(1).
- insertion or removal of elements at the end - amortized constant O(1)
- insertion or removal of elements - linear in distance to the end of the vector O(N).

```cpp
std::vector<int> vec{8, 4, 5, 9};
```

#### Used functions
##### Element access
| Functions | Meaning | link |
| ---- | ---- | ---- |
| .at() | access specified element with bounds checking | [at](https://en.cppreference.com/w/cpp/container/vector/at) |
| operator[] | access specified element | [operator](https://en.cppreference.com/w/cpp/container/vector/operator_at) |
| .front() | access the first element | [front](https://en.cppreference.com/w/cpp/container/vector/front) |
| .back() | access the last element | [back](https://en.cppreference.com/w/cpp/container/vector/back) |
| .data | direct access to the underlying contiguous storage | [data](https://en.cppreference.com/w/cpp/container/vector/data) |
##### iterators
| Functions | Meaning | link |
| ---- | ---- | ---- |
| .begin(), .cbegin() | returns an iterator to the beginning | [begin](https://en.cppreference.com/w/cpp/container/vector/begin) |
| .end(), .cend() | returns an iterator to the end | [end](https://en.cppreference.com/w/cpp/container/vector/end) |
| .rbegin(), .crbegin() | returns a reverse iterator to the beginning | [rbegin](https://en.cppreference.com/w/cpp/container/vector/rbegin) |
| .rend(), .crend() | returns a reverse iterator to the end | [rend](https://en.cppreference.com/w/cpp/container/vector/rend) |
##### Capacity
| Functions | Meaning | link |
| ---- | ---- | ---- |
| .empty() | checks whether the container is empty | [empty](https://en.cppreference.com/w/cpp/container/vector/empty) |
| .size() | returns the number of elements | [size](https://en.cppreference.com/w/cpp/container/vector/size) |
| .max_size() | returns the maximum possible number of elements | [max_size](https://en.cppreference.com/w/cpp/container/vector/max_size) |
| .reserve(size) | reserves storage | [reserve](https://en.cppreference.com/w/cpp/container/vector/reserve) |
| .capacity() | returns the number of elements that can be held in currently allocated storage | [capacity](https://en.cppreference.com/w/cpp/container/vector/capacity) |
| .shrink_to_fit() | reduces memory usage by freeing unused memory | [shrink_to_fit](https://en.cppreference.com/w/cpp/container/vector/shrink_to_fit) |
##### modifiers
| Functions | Meaning | link |
| ---- | ---- | ---- |
| .clear() | clears the contents | [clear](https://en.cppreference.com/w/cpp/container/vector/clear) |
| .insert() | inserts elements | [insert](https://en.cppreference.com/w/cpp/container/vector/insert) |
| .insert_range() | inserts a range of elements | [insert_range](https://en.cppreference.com/w/cpp/container/vector/insert_range) |
| .emplace() | constructs element in-place | [emplace](https://en.cppreference.com/w/cpp/container/vector/emplace) |
| .erase() | erases elements | [erase](https://en.cppreference.com/w/cpp/container/vector/erase) |
| .push_back() | adds an element to the end | [push_back](https://en.cppreference.com/w/cpp/container/vector/push_back) |
| .emplace_back() | constructs an element in-place at the end | [emplace_back](https://en.cppreference.com/w/cpp/container/vector/emplace_back) |
| .append_range() | adds a range of elements to the end | [append_range](https://en.cppreference.com/w/cpp/container/vector/append_range) |
| .pop_back() | removes the last element | [pop_back](https://en.cppreference.com/w/cpp/container/vector/pop_back) |
| .resize() | changes the number of elements stored | [resize](https://en.cppreference.com/w/cpp/container/vector/resize) |
| .swap() | swaps the contents | [swap](https://en.cppreference.com/w/cpp/container/vector/swap) |
| .remove(), .remove_if() | erases all elements satisfying specific criteria | [erase_if](https://en.cppreference.com/w/cpp/container/vector/erase2) |

```cpp
#include <iostream>
#include <vector>
 
int main()
{
    // Create a vector containing integers
    std::vector<int> v = {8, 4, 5, 9};
 
    // Add two more integers to vector
    v.push_back(6);
    v.push_back(9);
 
    // Overwrite element at position 2
    v[2] = -1;
 
    // Print out the vector
    for (int n : v)
        std::cout << n << ' ';
    std::cout << '\n';
}
```