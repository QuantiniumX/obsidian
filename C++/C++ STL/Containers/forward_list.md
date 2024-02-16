defined in `<forward_list`
[forward_list](https://en.cppreference.com/w/cpp/container/forward_list)` is a container that supports fast insertion and removal of elements from anywhere in the container. It is implemented as a [singly-linked list](obsidian://open?vault=obsidian&file=Programming%2FData_Structures%2FLinked%20Lists).


```cpp
std::forward_list<int> ll = {4, 2, 7, 5};
```

#### Element access
| Functions | Meaning |
| ---- | ---- |
| [front](https://en.cppreference.com/w/cpp/container/forward_list/front) | access the first element |

#### iterators
| Functionso | Meaning |
| ---- | ---- |
| [before_begin, cbefore_begin](https://en.cppreference.com/w/cpp/container/forward_list/before_begin) |  |
| [begin, cbegin](https://en.cppreference.com/w/cpp/container/forward_list/begin) | returns an iterator to the beginning |
| [end,cend](https://en.cppreference.com/w/cpp/container/forward_list/end) | returns an iterator to the end |

#### Capacity
| Functions | Meaning |
| ---- | ---- |
| [empty](https://en.cppreference.com/w/cpp/container/forward_list/empty) | checks whether the container is empty |
| [max_size](https://en.cppreference.com/w/cpp/container/forward_list/max_size) | returns the maximum possible number of elements |

#### Modifiers
| Functions | Meaning |
| ---- | ---- |
| [clear](https://en.cppreference.com/w/cpp/container/forward_list/clear) | clears the contents |
| [insert_after](https://en.cppreference.com/w/cpp/container/forward_list/insert_after) | inserts elements after an element |
| [emplace_after](https://en.cppreference.com/w/cpp/container/forward_list/emplace_after) | constructs elements in-place after an element |
| [insert_range_after](https://en.cppreference.com/w/cpp/container/forward_list/insert_range_after) | inserts a range of elements after an element |
| [erase_after](https://en.cppreference.com/w/cpp/container/forward_list/erase_after) | erases an element after an element |
| [pusH_front](https://en.cppreference.com/w/cpp/container/forward_list/push_front) | inserts an element to the beginning |
| [emplace_front](https://en.cppreference.com/w/cpp/container/forward_list/emplace_front) | constructs an element in-place at the beginning |
| [prepend_range](https://en.cppreference.com/w/cpp/container/forward_list/prepend_range) | adds a range of elements to the beginning |
| [pop_front](https://en.cppreference.com/w/cpp/container/forward_list/pop_front) | removes the first element |
| [resize](https://en.cppreference.com/w/cpp/container/forward_list/resize) | changes the number of elements stored |
| [swap](https://en.cppreference.com/w/cpp/container/forward_list/swap) | swaps the contents |

#### Operations
| Functions | Meaning |
| ---- | ---- |
| [merge](https://en.cppreference.com/w/cpp/container/forward_list/merge) | merges two sorted lists |
| [splice_after](https://en.cppreference.com/w/cpp/container/forward_list/splice_after) | moves elements from another `forward_list` |
| [remove, remove_if](https://en.cppreference.com/w/cpp/container/forward_list/remove) | removes elements satisfying specific criteria |
| [reverse](https://en.cppreference.com/w/cpp/container/forward_list/reverse) | reverses the order of the elements |
| [unique](https://en.cppreference.com/w/cpp/container/forward_list/unique) | removes consecutive duplicate elements |
| [sort](https://en.cppreference.com/w/cpp/container/forward_list/sort) | sorts the elements |
