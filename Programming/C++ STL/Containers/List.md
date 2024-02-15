defined in `<list>`

[`list`](https://en.cppreference.com/w/cpp/container/list) is a container that supports constant time insertion and removal of elements from anywhere in the container. It is a [doubly linked list](obsidian://open?vault=obsidian&file=Programming%2FData_Structures%2FLinked%20Lists).

```cpp
 std::list<int> l = {7, 5, 16, 8};
```

#### Element access
| Functions | Meaning |
| ---- | ---- |
| [front](https://en.cppreference.com/w/cpp/container/list/front) | access the first element |
| [back](https://en.cppreference.com/w/cpp/container/list/back) | access the last element |

#### iterators
| Functions | Meaning |
| ---- | ---- |
| [begin, cbegin](https://en.cppreference.com/w/cpp/container/list/begin) | returns an iterator to the beginning |
| [end,cend](https://en.cppreference.com/w/cpp/container/list/end) | returns an iterator to the end |
| [rbegin, crbegin](https://en.cppreference.com/w/cpp/container/list/rbegin) | returns a reverse iterator to the beginning |
| [rend, crend](https://en.cppreference.com/w/cpp/container/list/rend) | returns a reverse iterator to the end |

#### Capacity
| Functions | Meaning |
| ---- | ---- |
| [empty](https://en.cppreference.com/w/cpp/container/list/empty) | checks whether the container is empty |
| [size](https://en.cppreference.com/w/cpp/container/list/size) | returns the number of elements |
| [max_size](https://en.cppreference.com/w/cpp/container/list/max_size) | returns the maximum possible number of elements |

#### Modifiers
| Functions | Meaning |
| ---- | ---- |
| [clear](https://en.cppreference.com/w/cpp/container/list/clear) | clears the contents |
| [insert](https://en.cppreference.com/w/cpp/container/list/insert) | inserts elements |
| [insert_range](https://en.cppreference.com/w/cpp/container/list/insert_range) | inserts a range of elements |
| [emplace](https://en.cppreference.com/w/cpp/container/list/emplace) | constructs element in-place |
| [erase](https://en.cppreference.com/w/cpp/container/list/erase) | erases elements |
| [push_back](https://en.cppreference.com/w/cpp/container/list/push_back) | adds an element to the end |
| [emplace_back](https://en.cppreference.com/w/cpp/container/list/emplace_back) | constructs an element in-place at the end |
| [append_range](https://en.cppreference.com/w/cpp/container/list/append_range) | adds a range of elements to the end |
| [pop_back](https://en.cppreference.com/w/cpp/container/list/pop_back) | removes the last element |
| [pusH_front](https://en.cppreference.com/w/cpp/container/list/push_front) | inserts an element to the beginning |
| [emplace_front](https://en.cppreference.com/w/cpp/container/list/emplace_front) | constructs an element in-place at the beginning |
| [prepend_range](https://en.cppreference.com/w/cpp/container/list/prepend_range) | adds a range of elements to the beginning |
| [pop_front](https://en.cppreference.com/w/cpp/container/list/pop_front) | removes the first element |
| [resize](https://en.cppreference.com/w/cpp/container/list/resize) | changes the number of elements stored |
| [swap](https://en.cppreference.com/w/cpp/container/list/swap) | swaps the contents |

#### Operations
| Functions | Meaning |
| ---- | ---- |
| [merge](https://en.cppreference.com/w/cpp/container/list/merge) | merges two sorted lists |
| [splice](https://en.cppreference.com/w/cpp/container/list/splice) | moves elements from another `list` |
| [remove, remove_if](https://en.cppreference.com/w/cpp/container/list/remove) | removes elements satisfying specific criteria |
| [reverse](https://en.cppreference.com/w/cpp/container/list/reverse) | reverses the order of the elements |
| [unique](https://en.cppreference.com/w/cpp/container/list/unique) | removes consecutive duplicate elements |
| [sort](https://en.cppreference.com/w/cpp/container/list/sort) | sorts the elements |

```cpp
#include <algorithm>
#include <iostream>
#include <list>
 
int main()
{
    // Create a list containing integers
    std::list<int> l = {7, 5, 16, 8};
 
    // Add an integer to the front of the list
    l.push_front(25);
    // Add an integer to the back of the list
    l.push_back(13);
 
    // Insert an integer before 16 by searching
    auto it = std::find(l.begin(), l.end(), 16);
    if (it != l.end())
        l.insert(it, 42);
 
    // Print out the list
    std::cout << "l = { ";
    for (int n : l)
        std::cout << n << ", ";
    std::cout << "};\n";
}
```